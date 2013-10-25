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
    
    Manager(std::string name, Game *game = NULL);
    // Get other managers through the game pointer (convience function)
    std::string getName(void);
    
private:
    
    Game *game;
    std::string name;
  
};

#include "game.h"

#endif	/* MANAGER_H */

