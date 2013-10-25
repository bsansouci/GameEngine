#include <SDL/SDL.h>
#include "game.h"

class MyGameState : public GameState{
    MyGameState() : GameState(){}
};

int main(int argc, char *argv[]){
    Game *game = new Game();
    game->init();
    game->run();
}