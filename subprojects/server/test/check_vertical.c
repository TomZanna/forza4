#include "shm_utils.h"
#include <assert.h>

#define WIDTH 5
#define HEIGHT 5

void check_top_left(void) {
  // clang-format off
  char grid[WIDTH][HEIGHT] = {
      {'a', 'a', 'a', 'a', 0}, 
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0},
  };
  // clang-format on

  assert(_check_vertical(WIDTH, HEIGHT, grid) == 'a');
}

void check_top_right(void) {
  // clang-format off
  char grid[WIDTH][HEIGHT] = {
      {0, 'a', 'a', 'a', 'a'}, 
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0},
  };
  // clang-format on

  assert(_check_vertical(WIDTH, HEIGHT, grid) == 'a');
}

void check_bottom_left(void) {
  // clang-format off
  char grid[WIDTH][HEIGHT] = {
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}, 
      {'a', 'a', 'a', 'a', 0},
  };
  // clang-format on

  assert(_check_vertical(WIDTH, HEIGHT, grid) == 'a');
}

void check_bottom_right(void) {
  // clang-format off
  char grid[WIDTH][HEIGHT] = {
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0}, 
      {0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0}, 
      {0, 'a', 'a', 'a', 'a'},
  };
  // clang-format on

  assert(_check_vertical(WIDTH, HEIGHT, grid) == 'a');
}
int main(void) {
  check_top_left();
  check_top_right();
  check_bottom_left();
  check_bottom_right();

  return 0;
}
