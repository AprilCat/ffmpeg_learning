//
// Created by nephilim on 23-1-17.
//

#include <stdio.h>
#include <SDL.h>
#include <iostream>
using namespace std;
#undef main
int main(){
    cout << "hello sdl" << endl;
    SDL_Window *window = nullptr;
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Basic Window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640,
                              480,
                              SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if(!window){
        cerr << "Can't create window, err: " << SDL_GetError() << endl;
        return 1;
    }

    SDL_Delay(10000);

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}
