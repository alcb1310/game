#include <raylib.h>

#include "constants.h"
#include "game.h"

Game _game;

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Mine");
  SetTargetFPS(FPS);

  _game = create_game();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    update_game(&_game);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
