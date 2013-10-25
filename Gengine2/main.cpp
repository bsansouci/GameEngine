/* 
 * File:   main.cpp
 * Author: Eric
 *
 * Created on October 24, 2013, 4:40 PM
 */

#include <cstdlib>
#include <iostream>
#include "game.h"

using namespace std;

class MyHandler : public EventHandler{
    virtual void on_escapeu(Game *game, SDL_Event *event){
        game->quit();
    }
};

int main(int argc, char** argv) {
    Game game = Game();
    game.init();
    game.run();
}

