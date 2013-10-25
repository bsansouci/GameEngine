#include "windowmanager.h"

WindowManager::WindowManager(Game *game, int width, int height, int depth, Uint32 flags) : WindowInterface(game, width, height, depth, flags){
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