/* 
 * File:   WindowInterface.h
 * Author: Eric
 *
 * Created on October 11, 2013, 4:11 PM
 */

#ifndef WINDOWINTERFACE_H
#define	WINDOWINTERFACE_H

#include <SDL/SDL.h>
#include "manager.h"
#include "colour.h"
#include "window.h"
#include "surface.h"

class WindowInterface : public Manager{
    
public:
    
    WindowInterface(Game *game=NULL, int width=0, int height=0, int depth=32, Uint32 flags=0);
    void createWindow();
    
    virtual void blit(Surface *surface, float x, float y, SDL_Rect *clip=NULL) = 0;
    virtual void fill(Colour *colour) = 0;
    virtual void clear(void) = 0;
    virtual void flip(void) = 0;
    virtual void close(void) = 0;
    
protected:
    
    Colour *clear_colour;
    Window *window;
    int window_depth;
    int window_width;
    int window_height;
    int display_width;
    int display_height;
    Uint32 flags;
    
};


#endif	/* WINDOWINTERFACE_H */

