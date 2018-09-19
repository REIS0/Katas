#include <stdio.h>

// replace with the actual method being tested
char* pattern(const int n);

int main() {
  pattern(2);
  printf("\n");
  pattern(3);
}

char* pattern(const int n){
  int i = 1;
  if (n < 1){
    printf("");
    return 0;
  }

  while (i <= n) {
    int y = 0;
    while (y < i) {
      printf("%d", i);
      y++;
    }
    if (i < n) {
      printf("\n");
    }
    i++;
  }
	return 0;
}
