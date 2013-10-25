#include "errormanager.h"

ErrorManager::ErrorManager(Game* game){
    this->game = game;
    this->log[0] = "No Errors :)";
    this->position = 0;
}

void ErrorManager::postError(Error error, std::string comment){
    // Check if over capacity
    if (this->position > 9){
        this->position -= 1;
        // shift all errors down one
        for (int i=0; i < 9; i++){
            this->log[i] = this->log[i+1];
        }
    }
    error += ": ";
    error += comment;
    this->log[this->position] = error;
    this->position += 1;
}

void ErrorManager::postSDLError(void){
    this->postError(SDLERROR, SDL_GetError());
}

void ErrorManager::printError(int value){
    // Will attempt to print the last number (value) of errors on the log
    // if value is less than 0, then it will sipmly print
    // all errors held in the log
    if (value > this->position){
        value = this->position;
    }
    printf("Error Log:\n");
    for (int i=0; i < value; i++){
        printf("%s\n", this->log[i].c_str());
    }
}

void ErrorManager::makeLogFile(char *dest){
    FILE *file = fopen(dest, "w");
    if (file == NULL){
        this->postError(IOERROR, "Unable to open file.");
        return;
    }
    // Write to file
    fprintf(file, "Error Log:\n");
    for (int i=0; i < this->position; i++){
        fprintf(file, "%s\n", this->log[i].c_str());
    }
}

void ErrorManager::stop(int status){
    exit(status);
}

void ErrorManager::debugPrint(std::string message){
    std::cout << message << std::endl;
}