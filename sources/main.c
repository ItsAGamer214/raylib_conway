#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000
#define SCREEN_TITLE "aniRaylib_Conway"

#include <stdio.h>
#include<raylib.h>

int main(void) {
    InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,SCREEN_TITLE);
    while(!WindowShouldClose()){
        BeginDrawing();

        EndDrawing();
    }
    return 0;
}
