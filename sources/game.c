#include "game.h"
#include "levels/level1.h"
#include "player.h"

Player _player;

Game create_game(void) {
  _player = create_player(10);

  return (Game){.level = 1};
}

void update_game(Game *game) {
  move_player(&_player);

  draw_player(&_player);

  switch (game->level) {
  case 1:
    draw_level();
    break;
  }
}
