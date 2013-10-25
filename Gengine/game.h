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
#include "gamestate.h"
#include "manager.h"
#include "windowmanager.h"

class Manager;

class Game{
 
    private:
        
        typedef void (*InitFunc)(Game *game);
        std::map<std::string, Manager*> managers;
        GameState *state;

    public:

        void init(InitFunc func = NULL){
            WindowManager *window = this->getManager<WindowManager *>("window");
            window->createWindow();
        }
        
        void run(void){
            while (this->state->running){
            }
            SDL_Quit();
        }
        
        void quit(void){
            
        }

        void setState(GameState *state){
            this->state = state;
        }
        
        GameState *getState(void){
            return this->state;
        }

        template <class Manager>
        Manager getManager(std::string name){
            // Returns a pointer to  a manager that is assigned to the name
            // if nothing is found then NULL is returned
            if (this->managers.find(name) != this->managers.end()){
                return (Manager)this->managers[name];
            }
            return NULL;
        }
        
        int addManager(Manager *manager){
            // 0 if exists, 1 if added
            if (this->managers.find(manager->getName()) == this->managers.end()){ // doesn't exist
                this->managers[manager->getName()] = manager;
                return 1; // Make an error handle...
            }
            return 0;
        }
        int replaceManager(Manager *manager){
            // 0 if doesn't exist, 1 if replaced
            if (this->managers.find(manager->getName()) != this->managers.end()){ // exists
                this->managers[manager->getName()] = manager;
                return 1;
            }
            return 0;
        }
        
        int removeManager(std::string name){
            // 0 if doesn't exist, 1 if removed
            if (this->managers.find(name) != this->managers.end()){ // exists
                this->managers.erase(name);
                return 1;
            }
            return 0;
        }
        
        int removeManager(Manager *manager){
            // 0 if doesn't exist, 1 if removed
            if (this->managers.find(manager->getName()) != this->managers.end()){ // exists
                this->managers.erase(manager->getName());
                return 1;
            }
            return 0;
        }
        
        Game(){
            this->state = new GameState();
            // Attach prebuilt managers
            this->addManager(new WindowManager(this));
        }
};

#endif	/* GAME_H */