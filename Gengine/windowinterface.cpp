#include "windowinterface.h"

WindowInterface::WindowInterface(Game *game, int width, int height, int depth, Uint32 flags) : Manager("window", game){
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

void WindowInterface::createWindow(){
    // Create window
    this->window = new Window(this->window_width, this->window_height, this->window_depth, this->flags);
    this->clear_colour = new Colour(0, 0, 0); // Black clear colour
}