#ifndef Game_hpp
#define Game_hpp

#include <SDL2/SDL.h>
#include <iostream>

class Game {

public:
  Game();
  ~Game();

  void handleEvents();
  void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
  void update();
  void render();
  void clean(); 

  bool running();
private: 
  bool isRunning;
  SDL_Window *window;
  SDL_Renderer *renderer;
  
};

#endif