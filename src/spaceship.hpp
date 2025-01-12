#pragma once
// This header file is only included once in the compilation process
#include <raylib.h>

class SpaceShip {
    public:
        SpaceShip(); // Constructor
        ~SpaceShip(); // Destructor
        void Draw(); // Draw the spaceship
        void MoveLeft(); // Move the spaceship to the left
        void MoveRight(); // Move the spaceship to the right
        void FireLaster(); // Fire the laser
    private:
        Texture2D image;
        Vector2 position; // Position of the spaceship
};