/* 
 * File:   gamestate.h
 * Author: Eric
 *
 * Created on June 17, 2013, 10:33 PM
 */

#ifndef GAMESTATE_H
#define	GAMESTATE_H

class GameState{
public:
    GameState(){
        this->running = true;
    }
    bool running;
};

#endif	/* GAMESTATE_H */