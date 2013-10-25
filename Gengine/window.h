/* 
 * File:   window.h
 * Author: EricDesktop
 *
 * Created on June 9, 2013, 9:59 PM
 */

#ifndef WINDOW_H
#define	WINDOW_H

#include <GL/gl.h>
#include <SDL/SDL.h>
#include <iostream>
#include "colour.h"
#include "surface.h"

class Window{
    
public:
    
    Window(int width, int height, int depth=0, Uint32 flags=0);

    void blit(Surface *surface, float x, float y, SDL_Rect *clip=NULL);
    void fill(Colour *colour);
    void flip(void);
    void quit(void);
    
    SDL_Surface *screen;
    SDL_PixelFormat *format;
    Uint32 flags;
    int width;
    int height;
    int depth;
    
private:
    
    unsigned int last_texture;
    
};

#endif	/* WINDOW_H */

