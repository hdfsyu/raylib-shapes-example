#include <raylib.h>
const int width = 1280;
const int height = 720;
static float rotation = {0.0f};
static float timer = 0.0f;
static int sides = 0;
int main(){
    InitWindow(width, height, "example");
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
        rotation += 1.0f;
        timer += GetFrameTime();
        if(timer > 0.2f){
            timer = 0.0f;
            sides++;
        }
        // Shapes and I won't show how to render textures because i'm lazy
        DrawRectangle(width / 2, height / 2, 300, 100, BLUE);
        DrawRectangleV(Vector2{300, 200}, Vector2{100, 50}, GREEN);
        DrawRectangleRec(Rectangle{500, 400, 200, 200}, GRAY);
        DrawRectanglePro(Rectangle{200, 300, 200, 200}, Vector2{50, 50}, rotation, YELLOW);
        DrawCircle(300, 200, 64, BLACK);
        DrawTriangle(Vector2{120, 300}, Vector2{0, 100}, Vector2{100, 100}, BROWN);
        DrawRectangleGradientEx(Rectangle{100, 400, 400, 200}, BROWN, YELLOW, BLUE, GREEN);
        DrawRectangleLinesEx(Rectangle{400, 300, 100, 100}, 5, BLACK);
        DrawText("raylib", 408, 375, 20, BLACK);
        DrawPoly(Vector2{300, 300}, 6, 50, 0.0, PURPLE);
        DrawPoly(Vector2{100, 400}, sides % 12, 50, 0.0, PINK);
        EndDrawing();
    }
}
