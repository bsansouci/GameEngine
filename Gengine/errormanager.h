/* 
 * File:   errormanager.h
 * Author: Eric
 *
 * Created on July 31, 2013, 3:45 PM
 */

#ifndef ERRORMANAGER_H
#define	ERRORMANAGER_H

#include "SDL/SDL.h"
#include <cstdio>
#include <cstdlib>
#include <string> 

// <editor-fold defaultstate="collapsed" desc="Definitions...">
typedef std::string Error; 
#define IOERROR "IOError"
#define TYPEERROR "TypeError"
#define USERERROR "UserError"
#define VALUEERROR "ValueError"
#define KEYERROR "KeyError"
#define INDEXERROR "IndexError"
#define SDLERROR "SDLError"
// </editor-fold>

class Game;

class ErrorManager{
    
public:
    
    ErrorManager(Game *game);
    void postError(Error error="Error", std::string comment="");
    void postSDLError(void);
    void printError(int value=1);
    void makeLogFile(char *dest="errorlog");
    void stop(int status=1);
    void debugPrint(std::string message);
    
protected:
    Game *game;
    std::string log[10];
    
private:
    int position;
};

#include "game.h"

#endif	/* ERRORMANAGER_H */

