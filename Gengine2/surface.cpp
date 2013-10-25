#include "surface.h"

Surface::Surface(const char* file_name) {
	unsigned int texture = 0;
        this->surface = NULL;
	SDL_Surface *surface = IMG_Load(file_name);
        // Check if surface worked
        if(surface == NULL) {
            return;
        }
        // Check to see if an opengl surface was created
        if (SDL_GetVideoSurface()->flags & SDL_OPENGL){
            this->width = surface->w;
            this->height = surface->h;

            glGenTextures(1, &texture);
            glBindTexture(GL_TEXTURE_2D, texture);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, this->width, this->height, 0, GL_RGBA, GL_UNSIGNED_BYTE, surface->pixels);

            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

            this->texture = texture;
            // Delete the surface
            SDL_FreeSurface(surface);
        }
        else{
            // Keep the SWSurface
            this->surface = SDL_DisplayFormatAlpha(surface);
            // Delete the surface
            SDL_FreeSurface(surface);
        }
}

Surface::~Surface() {
        if (SDL_GetVideoSurface()->flags & SDL_OPENGL){
                glDeleteTextures(1, &(this->texture));
        }
        else{
            SDL_FreeSurface(this->surface);
        }
}

unsigned int Surface::getTexture(void) {
	return this->texture;
}

SDL_Surface *Surface::getSurface(void) {
        return this->surface;
}
