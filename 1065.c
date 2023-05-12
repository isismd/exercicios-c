// beecrowd | 1065
// Pares entre Cinco Números
// Adaptado por Neilor Tonin, URI  Brasil

// Faça um programa que leia 5 valores inteiros. Conte quantos destes valores
// digitados são pares e mostre esta informação.

// Entrada
// O arquivo de entrada contém 5 valores inteiros quaisquer.

// Saída
// Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de
// valores pares lidos.

#include <stdio.h>

int main() {
  int pares, num[5], i;

  pares = 0;

  for (i = 0; i < 5; i++) {
    scanf("%d", &num[i]);

    if (num[i] % 2 == 0) {
      pares++;
    }
  }

  printf("%d valores pares\n", pares);
  return 0;
}
