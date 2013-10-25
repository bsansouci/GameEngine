#include "game.h"

Game::Game(void){
    this->state = new GameState();
    // Attach pre-built managers
    WindowManager *window = new WindowManager(this);
    EventManager *event = new EventManager(this);
    this->addManager(window);
}

void Game::init(InitFunc func){
    this->getManager<WindowManager>("window")->createWindow();
    if (func){
        (*func)(this);
    }
}

void Game::run(void){
    while (this->state->running){
        this->getManager<EventManager>("event")->handle(this);
    }
    SDL_Quit();
}

void Game::quit(void){
    this->state->running = false;
}

void Game::setState(GameState *state){
    this->state = state;
}

GameState *Game::getState(void){
    return this->state;
}

template <class Manager>
Manager *Game::getManager(std::string name){
    // Returns a pointer to  a manager that is assigned to the name
    // if nothing is found then NULL is returned
    if (this->managers.find(name) != this->managers.end()){
        return (Manager*)this->managers[name];
    }
    return NULL;
}

int Game::addManager(Manager *manager){
    // 0 if exists, 1 if added
    if (this->managers.find(manager->getName()) == this->managers.end()){ // doesn't exist
        this->managers[manager->getName()] = manager;
        return 1; // Make an error handle...
    }
    return 0;
}
int Game::replaceManager(Manager *manager){
    // 0 if doesn't exist, 1 if replaced
    if (this->managers.find(manager->getName()) != this->managers.end()){ // exists
        this->managers[manager->getName()] = manager;
        return 1;
    }
    return 0;
}

int Game::removeManager(std::string name){
    // 0 if doesn't exist, 1 if removed
    if (this->managers.find(name) != this->managers.end()){ // exists
        this->managers.erase(name); // LEAKS ADD DELETE
        return 1;
    }
    return 0;
}

int Game::removeManager(Manager *manager){
    // 0 if doesn't exist, 1 if removed
    if (this->managers.find(manager->getName()) != this->managers.end()){ // exists
        this->managers.erase(manager->getName());
        return 1;
    }
    return 0;
}
