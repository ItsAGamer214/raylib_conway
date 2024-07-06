#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000
#define SCREEN_TITLE "aniRaylib_Conway"

#include <stdio.h>
#include"raylib.h"

typedef struct{

}Grid;

int main(void) {
    InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,SCREEN_TITLE);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        int width = 100;
        int height = 100;

        for(int i = 0; i < 1000; i+= width){
            for(int j = 0; j < 1000; j+= height){
                Rectangle r = {i,j,width,height};
                DrawRectangleLinesEx(r,1.0f,(Color){255,255,255,100});
            }
        }
        DrawLineEx( (Vector2) {SCREEN_WIDTH/2, 0},(Vector2){SCREEN_WIDTH/2, SCREEN_HEIGHT},4.0f, (Color){255,255,255,150} );
        DrawLineEx( (Vector2) {0, SCREEN_HEIGHT / 2},(Vector2){SCREEN_WIDTH, SCREEN_HEIGHT / 2},4.0f, (Color){255,255,255,150} );




        EndDrawing();
    }
    return 0;
}
