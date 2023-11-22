#include <stdio.h>
#include <assert.h>


int ImageValidRect() { ///
  return 1 >= 0 && 1 >= 0 && 1 + 2 <= 2 && 1 + 1 <= 2;
}

int main() {
  printf("Result: %d\n", ImageValidRect());

  return 0;
}