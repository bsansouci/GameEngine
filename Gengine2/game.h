/* 
 * File:   game.h
 * Author: Eric
 *
 * Created on June 27, 2013, 11:36 PM
 */

#ifndef GAME_H
#define	GAME_H

#include <cstddef>
#include <string>
#include <map>
#include <SDL/SDL.h>

#include "gamestate.h"
#include "windowmanager.h"
#include "eventmanager.h"
#include "manager.h"

class Game{
 
    private:
        
        typedef void (*InitFunc)(Game *game);
        std::map<std::string, Manager*> managers;
        GameState *state;

    public:
        
        Game(void);
        void init(InitFunc func = NULL);
        void run(void);
        void quit(void);
        
        void setState(GameState *state);
        GameState *getState(void);
        template <class Manager>
        Manager *getManager(std::string name);
        int addManager(Manager *manager);
        int replaceManager(Manager *manager);
        int removeManager(std::string name);
        int removeManager(Manager *manager);
        
};

#endif	/* GAME_H */