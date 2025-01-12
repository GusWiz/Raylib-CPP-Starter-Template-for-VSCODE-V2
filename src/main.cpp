#include <raylib.h>
#include "game.hpp"
// Steps to creating Space Invaders.
// 1. Create the Game Window. Which should be an empty window that we will use to draw
// our game objects on.

// 2. Create a Game Loop. 
// 2.1 Event Handling.
// 2.2 Update Positions such as players, aliens, and rocks.
// 2.3 Draw the game objects.

// 3. Lasers of Spaceship and Aliens
// 3.1
// 4. Create Obstacles
// 5. Create Aliens
// 6. Create Mystery Ship
// 7. Check for Collisions
// 8. Game Over
// 9. Add Scoring
// 10. Add High-Score
// 11. Add Sound Effects
int main() 
{   
    // Colors in raylib Color color = {red, greenm blue, alpha}
    // alpha value indicates the intensity of the color created
    // Creating a color object to be grey
    Color grey = {29, 29, 27, 255};

    int windowWidth = 750; // Width of the game window
    int windowHeight = 700; // Height of the game window

    // creates Game Window with the specified width and height and the title
    InitWindow(windowWidth, windowHeight, "Space Invaders in C++");
    SetTargetFPS(30); // Frame rate is suitable for gameplay
    
    Game game; // creates instance of Game class

    SpaceShip spaceship; // Creating a spaceship object
    // Game loop
    while(WindowShouldClose() == false) {
        
        game.HandleInput(); // Checks for user input (left or right arrow keys)

        BeginDrawing(); 
        ClearBackground(grey); // Clears the screen with the color grey
        game.Draw();
        EndDrawing();
        
    }

    CloseWindow();
}