#include <raylib.h>

#include "../constants.h"

void draw_level(void) {
  /*DrawLine(0, SCREEN_HEIGHT - FLOOR_LEVEL, SCREEN_WIDTH, SCREEN_HEIGHT - FLOOR_LEVEL, GREEN);*/
  DrawRectangle(0, SCREEN_HEIGHT- FLOOR_LEVEL, SCREEN_WIDTH, SCREEN_HEIGHT, GREEN);
}
