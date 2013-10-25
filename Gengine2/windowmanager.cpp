#include "windowmanager.h"

WindowManager::WindowManager(Game *game, int width, int height, int depth, Uint32 flags) : Manager("window", game){
    // Check for video subsystem
    if(SDL_WasInit(SDL_INIT_VIDEO) == 0){
        SDL_InitSubSystem(SDL_INIT_VIDEO);
    }
    // Get display screen info
    const SDL_VideoInfo *info = SDL_GetVideoInfo();
    this->display_width = info->current_w;
    this->display_height = info->current_h;
    // if no width or height is given just use half widht and half height
    if (width == 0){
        this->window_width = this->display_width / 2;
    }
    if (height == 0){
        this->window_height = this->display_height / 2;
    }
    this->window_depth = depth;
    this->flags = flags;
}

void WindowManager::createWindow(){
    // Create window
    this->window = new Window(this->window_width, this->window_height, this->window_depth, this->flags);
    this->clear_colour = new Colour(0, 0, 0); // Black clear colour
}

void WindowManager::blit(Surface *surface, float x, float y, SDL_Rect *clip){
    this->window->blit(surface, x, y, clip);
}

void WindowManager::fill(Colour *colour){
    this->window->fill(colour);
}

void WindowManager::clear(void){
    this->window->fill(this->clear_colour);
}

void WindowManager::flip(void){
    this->window->flip();
}

void WindowManager::close(void){
    this->window->quit();
}

void WindowManager::setFlags(Uint32 flags){
    this->flags = flags;
}

bool WindowManager::hasFlag(Uint32 flag){
    if (this->window->flags & flag){
        return true;
    }
    return false;
}

void WindowManager::setClearClour(Colour *colour){
    this->clear_colour = colour;
}

int WindowManager::getDisplayWidth(void){
    return this->display_width;
}

int WindowManager::getDisplayHeight(void){
    return this->display_height;
}

Window *WindowManager::getWindow(void){
    return this->window;
}

void WindowManager::setDimensions(int width, int height){
    this->window_width = width;
    this->window_height = height;
}
void WindowManager::setDepth(int depth){
    this->window_depth = depth;
}
