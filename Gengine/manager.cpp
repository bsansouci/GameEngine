#include "manager.h"

Manager::Manager(const std::string name, Game* game){
    // Requires a name which if its identifier
    // if game is not given then you cna use the addManager
    // method on the game object to add it later.
    // if game is provided then it'll automatically associate itself
    // with game object through its map object
    this->name = name;
    this->game = game;
}

std::string Manager::getName(){
    // Returns the name of this class
    return this->name;
}