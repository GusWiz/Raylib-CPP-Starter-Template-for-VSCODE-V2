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
    DrawTextureV(image, position, WHITE); // Draws the spaceship
}

void SpaceShip::MoveLeft()
{
    position.x -= 7; // Move the spaceship to the left by 7 pixels
    
    // Checks if the spaceship is at the left edge of the screen, 
    // if it is, it sets the position of the spaceship to 0 (max left)
    if(position.x < 0) {
        position.x = 0;
    }
}

void SpaceShip::MoveRight()
{
    position.x += 7; // Move the spaceship to the right by 7 pixels
    if(position.x > GetScreenWidth() - image.width) {
        position.x = GetScreenWidth() - image.width;
    }
}