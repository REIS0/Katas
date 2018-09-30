// Programa pra checar picos de onda em um loop musical, com os pontos da onda sendo numeros inputador pelo usuário

#include <stdio.h>

int main(void) {

  while (1) {
    // test case input
    int n;
    scanf("%d", &n);

    // break condition
    if (n == 0 || n < 2 || n > 10000) {
      return 0;
    }

    // sequence input
    int j = 0;
    int sequences[n];
    while (j < n) {
      scanf("%d", &sequences[j]);
      if (sequences[j] < -10000 || sequences[j] > 10000) {
        return 0;
      }
      j++;
    }
    // break condition
    if (sequences[0] == sequences[n - 1] || sequences[0] < 1) {
      return 0;
    }

    // count
    int count = 0;
    for (j = 0; j < n; j++) {
      // break condition
      if (sequences[j] == sequences[j + 1]) {
        return 0;
      }
      // count condition
      if (j == 0) { // checa se é o primeiro elemento do loop
        if (!sequences[j + 2]) {
          count++;
        }else if (sequences[j + 1] > sequences[j] && sequences[j + 1] > sequences[j + 2]) { // checa se o proximo elemento é um pico, se
          count++;                                                                          // for o primeiro elemento será um pico tambem.
        }else if (sequences[j + 1] < sequences[j] && sequences[j + 1] < sequences[j + 2]) {
          count++;
        }else {
          continue;
        }
      }

      else if (j == (n - 1)) { // se o elemento for o ultimo
        if (sequences[j] < sequences[j - 1] && sequences[j] < sequences[0]) {       // checa se ele é um pico comparando com o elemento
          count++;                                                                  // anterior e o primeiro.(no loop depois da primeira
        }else if (sequences[j] > sequences[j - 1] && sequences[j] > sequences[0]) { // vez tocado o primeiro elemento se torna um elemento
          count++;                                                                  // qualquer)
        }else {
          continue;
        }

      }else { // qualquer outro elemento
        if (sequences[j] < sequences[j - 1] && sequences[j] < sequences[j + 1]) {
          count++;
        }else if (sequences[j] > sequences[j - 1] && sequences[j] > sequences[j + 1]) {
          count++;
        }else {
          continue;
        }
      }
    }

    printf("%d\n", count); // mostra contagem de picos
  }
}
