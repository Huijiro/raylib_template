#include "raylib.h"

constexpr auto SCREEN_WIDTH = 800;
constexpr auto SCREEN_HEIGHT = 450;

int main() {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Window title");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    const char* text = "OMG! IT WORKS!";
    const Vector2 text_size = MeasureTextEx(GetFontDefault(), text, 20, 1);
    DrawText(text, (SCREEN_WIDTH - text_size.x) / 2,
             (SCREEN_HEIGHT - text_size.y) / 2, 20, BLACK);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}