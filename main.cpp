#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

using namespace std;


int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    if (SDL_Init(SDL_INIT_VIDEO))
    {
        SDL_Log("Erreur: Initialisation SDL > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    //  Execution du Programme
    SDL_Window *window = SDL_CreateWindow("Démineur",
                                          SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          800, 600, SDL_WINDOW_FULLSCREEN);
    
    // Check that the window was successfully created
    if (window == NULL)
    {
        SDL_Log("Erreur: Creation fenetre echouee > %s\n", SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_Delay(5000);
    
    SDL_Quit();
    
    return EXIT_SUCCESS;
}
