// https://www.codewars.com/kata/58989a079c70093f3e00008d

#include <stdio.h>

int ** cartesian_neighbor(int x, int y);

int main() {
  cartesian_neighbor(2, 2);
}


int ** cartesian_neighbor(int x, int y){
  int i = 0;
  int array[8][2];
  int z, u;
  int a = x + 1;
  int b = y + 1;
  for (z = x - 1; z <= a; z++) {
    for (u = y - 1; u <= b; u++) {
      if (u == y && z == x) {
        continue;
      }
      array[i][0] = z;
      array[i][1] = u;
      i++;
    }
  }

  printf("{");
  for (i = 0; i < 8; i++) {
    printf("{%d,%d}", array[i][0], array[i][1]);
    if (i < 7) {
      printf(",");
    }
  }
  printf("}");

  return array;
}
