/* 
 * File:   windowmanager.h
 * Author: Eric
 *
 * Created on June 27, 2013, 11:47 PM
 */

#ifndef WINDOWMANAGER_H
#define	WINDOWMANAGER_H

#include <SDL/SDL.h>
#include "window.h"
#include "colour.h"
#include "game.h"
#include "windowinterface.h"

class WindowManager : public WindowInterface{
    
public:
    
    WindowManager(Game *game=NULL, int width=0, int height=0, int depth=32, Uint32 flags=0);
    void blit(Surface *surface, float x, float y, SDL_Rect *clip=NULL);
    void fill(Colour *colour);
    void clear(void);
    void flip(void);
    void close(void);
    
    void setDimensions(int width, int height);
    void setDepth(int depth);
    void setFlags(Uint32 flags);
    bool hasFlag(Uint32 flag);
    void setClearClour(Colour *colour);
    int getDisplayWidth(void);
    int getDisplayHeight(void);
    Window *getWindow(void);
    
protected:
    Colour *clear_colour;
    Window *window;
    Game *game;
    int window_depth;
    int window_width;
    int window_height;
    int display_width;
    int display_height;
    Uint32 flags;
    
};

#endif	/* WINDOWMANAGER_H */

