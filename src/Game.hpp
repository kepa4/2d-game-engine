#ifndef Game_hpp
#define Game_hpp

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
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

  bool running() { return isRunning; }
private: 
  bool isRunning;
  int count = 0;
  SDL_Window *window;
  SDL_Renderer *renderer;
  
};

#endif
