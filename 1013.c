// URI Online Judge | 1013
// O Maior
// Adaptado por Neilor Tonin, URI  Brasil

// Faça um programa que leia três valores e apresente o maior dos três valores
// lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

// Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um
// segundo passo, portanto é necessário para chegar no resultado esperado.

// Entrada
// O arquivo de entrada contém três valores inteiros.

// Saída
// Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o
// maior".

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, maiorAB, maiorAC;

  scanf("%d %d %d", &a, &b, &c);

  maiorAB = (a + b + abs(a - b)) / 2;
  maiorAC = (maiorAB + c + abs(maiorAB - c)) / 2;

  printf("%d eh o maior\n", maiorAC);

  return 0;
}
