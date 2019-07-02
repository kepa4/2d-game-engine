#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texture)
{
  SDL_Surface* temSurface = IMG_Load(texture);
  SDL_Texture* tex = SDL_CreateTextureFromSurface(Game::renderer, temSurface);
  SDL_FreeSurface(temSurface);

  return tex;
}