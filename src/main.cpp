#include "raylib.h"

// Steps to creating Space Invaders.
// 1. Create the Game Window. Which should be an empty window that we will use to draw
// our game objects on.
// 2. Create a Game Loop. 
// 2.1 Event Handling.
// 2.2 Update Positions such as players, aliens, and rocks.
// 2.3 Draw the game objects.
int main() 
{
    // Specify the width and the height
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth, windowHeight, "Space Invaders in C++");

    CloseWindow();
}