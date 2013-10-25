/* 
 * File:   renderermanager.h
 * Author: Eric
 *
 * Created on July 31, 2013, 8:07 PM
 */

#ifndef RENDERERMANAGER_H
#define	RENDERERMANAGER_H

#include <SDL/SDL.h>
#include <list>
#include "windowmanager.h"
#include "surface.h"
#include "window.h"

class Game;

class RendererManager{
    
public:
    
    RendererManager(Game *game);
    void handle(void);
    Surface *background1;
    Surface *background2;
    Surface *tileset;

protected:
    
    Game *game;
    WindowManager *windowmanager;
    void renderBackground1(int parallax);
    void renderBackground2(int parallax);
    void renderLevelBack(void);
    void renderPlayer(void);
    void renderLevelFront(void);
    void renderParticles(void);
    void renderImages(void);
    
private:
    
};

#include "game.h"

#endif	/* RENDERERMANAGER_H */

