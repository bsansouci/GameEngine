/* 
 * File:   eventmanager.h
 * Author: Eric
 *
 * Created on June 28, 2013, 12:35 AM
 * Eventmanager is responsible for handling how events are filtered and
 * allowing the user to access event functions from SDL
 */

// Perhaps add feature for mod states but for now its not necessary

#ifndef EVENTMANAGER_H
#define	EVENTMANAGER_H

#include <SDL/SDL.h>
#include "eventhandler.h"

class Game;

class EventManager{
    
public:
    
    EventManager(Game *game, EventHandler *handler = NULL);
    void handle(Game *game);
    
    void setEventFilter(SDL_EventFilter filter);
    SDL_EventFilter getEventFilter(void);
    
    void ignoreEventType(SDL_EventType type);
    void enableEventType(SDL_EventType type);
    int getEventTypeState(SDL_EventType type);
    
    SDL_Event *createUserEvent(Uint8 type=SDL_USEREVENT, int code=0, void *data1=NULL, void *data2=NULL);
    void pushUserEvent(SDL_Event *event);
    
    void setHandler(EventHandler *handler);
    EventHandler *getHandler(void);
    
protected:
    
    Game *game;
    EventHandler *handler;
    SDL_Event event;
};

#include "game.h"

#endif	/* EVENTMANAGER_H */

