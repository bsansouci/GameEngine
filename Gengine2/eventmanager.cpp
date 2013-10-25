#include "eventmanager.h"

EventManager::EventManager(Game *game, EventHandler* handler) : Manager("event", game){
    this->game = game;
    if (handler != NULL){
        this->handler = handler;
    }
    else{
        this->handler = new EventHandler();
    }
}

SDL_Event *EventManager::createUserEvent(Uint8 type, int code, void *data1, void *data2){
    SDL_Event *event = new SDL_Event();
    event->type = type;
    event->user.code = code;
    event->user.data1 = data1;
    event->user.data2 = data2;
    return event;
}

void EventManager::pushUserEvent(SDL_Event* event){
    SDL_PushEvent(event);
}

void EventManager::ignoreEventType(SDL_EventType type){
    SDL_EventState(type, SDL_IGNORE);
}

void EventManager::enableEventType(SDL_EventType type){
    SDL_EventState(type, SDL_ENABLE);
}

int EventManager::getEventTypeState(SDL_EventType type){
    return SDL_EventState(type, SDL_QUERY);
}

void EventManager::handle(Game *game){
    while(SDL_PollEvent(&event)) {
        this->handler->handle(game, &event);
    }
}

void EventManager::setHandler(EventHandler *handler){
    this->handler = handler;
}

EventHandler *EventManager::getHandler(){
    return this->handler;
}
