#include "spaceship.hpp"

SpaceShip::SpaceShip()
{
    // Allocate memory for the image
    image = LoadTexture("images/spaceship.png");
    image.width = 50;
    image.height = 50;
    // position.x = 100;
    // position.y = 100;
    position.x = (GetScreenWidth() - image.width)/2; // Center the spaceship
    position.y = (GetScreenHeight() - image.height) - 10; // Center the spaceship 
}
SpaceShip::~SpaceShip()
{
    // Unload the image from memory
    UnloadTexture(image);
}

void SpaceShip::Draw(){
    DrawTextureV(image, position, WHITE);
}