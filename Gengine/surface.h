/* 
 * File:   surface.h
 * Author: Eric
 *
 * Created on June 10, 2013, 12:44 AM
 */

#ifndef SURFACE_H
#define	SURFACE_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <GL/gl.h>
#include "colour.h"

class Surface{
    
public:
    
    Surface(const char* file_name);
    ~Surface();
    
    unsigned int getTexture();
    SDL_Surface *getSurface();
    
    int width;
    int height;
    int depth;
    unsigned int texture;
    SDL_Surface *surface;
};

#endif	/* SURFACE_H */

