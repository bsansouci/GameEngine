#include "colour.h"

Colour::Colour(int r, int g, int b, int a){
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

int Colour::getR(void){
    return this->r;
}

int Colour::getG(void){
    return this->g;
}

int Colour::getB(void){
    return this->b;
}

int Colour::getA(void){
    return this->a;
}

Uint32 Colour::map(void){
    // Getting the format
    SDL_PixelFormat *format;
    if(SDL_WasInit(SDL_INIT_VIDEO)){
        format = SDL_GetVideoSurface()->format;
    }
    else{
        format = SDL_GetVideoInfo()->vfmt;
    }
    // Mapping the numbers
    if (this->a == 255){
        return SDL_MapRGB(format, this->r, this->g, this->b);
    }
    else{
        return SDL_MapRGBA(format, this->r, this->g, this->b, this->a);
    }
}