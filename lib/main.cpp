#include <iostream>
#include "raylib.h"

int main(void){
    InitWindow(400, 224, "Template");

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
}