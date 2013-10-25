/* 
 * File:   manager.h
 * Author: Eric
 *
 * Created on October 9, 2013, 9:58 AM
 */

#ifndef MANAGER_H
#define	MANAGER_H

#include <string>

class Game;

class Manager{
    
public:
    
    Manager(std::string name, Game *game = NULL){
        // Requires a name which if its identifier
        // if game is not given then you can use the addManager
        // method on the game object to add it later.
        // if game is provided then it'll automatically associate itself
        // with game object through its map object
        this->name = name;
        this->game = game;
    }
    
    // Get other managers through the game pointer (convience function)
    template <class Manager>
    Manager getManager(std::string name){
        if (this->game != NULL){
            return this->game-getManager<Manager>(name);
        }
        return NULL;
    }
    
    std::string getName(void){
        // Returns the name of this class
        return this->name;
    }
    
private:
    
    Game *game;
    std::string name;
  
};

#include "game.h"

#endif	/* MANAGER_H */