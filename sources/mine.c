#include <raylib.h>

#include "constants.h"
#include "player.h"

Player _player;

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Mine");
  SetTargetFPS(FPS);

  _player = create_player(10);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    draw_player(&_player);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
