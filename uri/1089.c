#include <stdio.h>

int main(void) {

  while (1) {
    // test case input
    int n;
    scanf("%d", &n);

    // break condition
    if (n == 0) {
      return 0;
    }


    // sequence input
    int j = 0;
    int sequences[n];
    while (j < n) {
      scanf("%d", sequences[j]);
      j++;
    }
    // break condition
    if (sequences[0] == sequences[n - 1] || sequences[0] < 1) {
      break;
    }

    // count
    int count = 0;
    j = 0;
    while (j < n) {
      // break condition
      if (sequences[j] == sequences[j + 1]) {
        break;
      }

      // count condition
      if (sequences[j] == sequences[n - 1]) { // for sequences[j] being the last element
        if (sequences[j - 1] < 0) {
          if (sequences[j] < sequences[j - 1] && sequences[j] < sequences[0]) {
            count++;
          }
        }else {
          if (sequences[j] > sequences[j - 1] && sequences[j] > sequences[0]) {
            count++;
          }else if (sequences[j] < sequences[j - 1] && sequences[j] < sequences[0]) {
            count++;
          }
        }

      }else {
        if (sequences[j] < sequences[j - 1] && sequences[j] < sequences[j + 1]) {
          count++;
        }else if (sequences[j] > sequences[j - 1] && sequences[j] > sequences[j + 1]) {
          count++;
        }
      }
      j++;
    }

    printf("%d\n", count);
  }
}
