#include <raylib.h>

#include "constants.h"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Mine");
  SetTargetFPS(FPS);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    DrawText("Hello World!", SCREEN_HEIGHT / 2 - 50, SCREEN_HEIGHT / 2, 20, WHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
