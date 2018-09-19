#include <stdio.h>

int main() {

  int array[5][10];
  int i ,j;

  for (i = 0; i < 5; i++) {
    int y;
    scanf("%d", &y);
    for (j = 0; j < 10; j++) {
      array[i][j] = 0;
      int id;
      scanf("%d", &id);
      array[i][j] = id;
    }
  }

  scanf("%d", &i);
  int soma[i];

  for (i = 0; i < 5; i++) {
    soma[i] = 0;
    for (j = 0; j < 10; j++) {
      soma[i] = soma[i] + array[i][j];
    }
  }

  printf("%d", soma);
}
