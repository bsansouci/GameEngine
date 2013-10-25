#include "window.h"

Window::Window(int width, int height, int depth, Uint32 flags){
    // Check for video subsystem
    if(SDL_WasInit(SDL_INIT_VIDEO) == 0){
        SDL_InitSubSystem(SDL_INIT_VIDEO);
    }
    //gathering info on video hardware
    const SDL_VideoInfo *info = SDL_GetVideoInfo();
    /* This gives info about video hardware. we should use this */
    this->format = info->vfmt;
    // some values
    this->width = width;
    this->height = height;
    this->last_texture = 0; // keeps track at whether the previous texture
                            // is the same so a texture swap can be avoided
    // Checks for proper depth
    if (depth){
        this->depth = depth;
    }
    else{
        this->depth = this->format->BitsPerPixel;
    }
    
    // Checks for flags
    if (flags){
        this->flags = flags;
    }
    else{
        if (info->blit_hw){
            this->flags = this->flags | SDL_HWSURFACE;
        }
        else{
            this->flags = this->flags | SDL_SWSURFACE;
        }
    }
    
    // Create Window
    this->screen = SDL_SetVideoMode(this->width, this->height, 
            this->depth, this->flags);
    
    if (this->screen == NULL){
        std::cout << SDL_GetError();
    }
    
    // OpenGL set up
    if (this->flags & SDL_OPENGL){
        glMatrixMode( GL_PROJECTION );
        glLoadIdentity( );
        glOrtho(0,this->width, this->height, 0, 0, 1);
        glMatrixMode(GL_MODELVIEW);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
        glEnable(GL_TEXTURE_2D);
        glEnable(GL_BLEND);
        glDisable(GL_LIGHTING);

        SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    }
}

void Window::blit(Surface *surface, float x, float y, SDL_Rect *clip) {
    // Draw on screen. If clip is NULL then there will be no clipping
    if (this->flags & SDL_OPENGL){
	unsigned int texture = surface->getTexture();

	glLoadIdentity();
	glPushMatrix();
	glTranslated(x, y, 0);
        if (texture != this->last_texture){
            // Remove some repeats
            glBindTexture(GL_TEXTURE_2D, texture);
        }
	glBegin(GL_QUADS);
        if (clip == NULL){
            glTexCoord2f(1.0, 0.0);
            glVertex2d(0,0);
            glTexCoord2f(0.0, 0.0);
            glVertex2d(surface->width, 0);
            glTexCoord2f(0.0, 1.0);
            glVertex2d(surface->width, surface->height);
            glTexCoord2f(1.0, 1.0);
            glVertex2d(0, surface->height);
	}
        else{
            // Doing some vertex math the 1s are there because the x was inverted???
            float x1 = 1-(float)clip->x/(float)surface->width;
            float y1 = (float)clip->y/(float)surface->height;
            float x2 = 1-((float)clip->x+(float)clip->w)/(float)surface->width;
            float y2 = ((float)clip->y+(float)clip->h)/(float)surface->height;
            
            printf("%f, %f, %f, %f\n", x1, x2, y1, y2);
            glTexCoord2f(x1, y1);
            glVertex2d(0,0);
            glTexCoord2f(x2, y1);
            glVertex2d(clip->w, 0);
            glTexCoord2f(x2, y2);
            glVertex2d(clip->w, clip->h);
            glTexCoord2f(x1, y2);
            glVertex2d(0, clip->h);
        }
	glEnd();
	glPopMatrix();
    }
    else{
        SDL_Rect offset;
        offset.x = x;
        offset.y = y;
        SDL_BlitSurface(surface->getSurface(), clip, this->screen, &offset);
    }
}

void Window::fill(Colour *colour){
    if (this->flags & SDL_OPENGL){
        glClearColor(float(colour->r)/255.0, float(colour->g)/255.0, float(colour->b)/255.0, float(colour->a)/255.0);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
    else{
        SDL_FillRect(this->screen, NULL, colour->map());
    }
}

void Window::flip(void){
    if (this->flags & SDL_OPENGL){
	SDL_GL_SwapBuffers();
	glFlush();
    }
    else{
        SDL_Flip(this->screen);
    }
}

void Window::quit(void){
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}