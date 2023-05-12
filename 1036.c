// beecrowd | 1036
// Fórmula de Bhaskara
// Adaptado por Neilor Tonin, URI  Brasil

// Timelimit: 1
// Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de
// Bhaskara. Se não for possível calcular as raízes, mostre a mensagem
// correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de
// numero negativo.

// Entrada
// Leia três valores de ponto flutuante (double) A, B e C.

// Saída
// Se não houver possibilidade de calcular as raízes, apresente a mensagem
// "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5
// dígitos após o ponto, com uma mensagem correspondente conforme exemplo
// abaixo. Imprima sempre o final de linha após cada mensagem.

#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c, delta, r1, r2;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  delta = (b * b) - (4 * a * c);
  r1 = ((-b) + (sqrt(delta))) / (2 * a);
  r2 = ((-b) - (sqrt(delta))) / (2 * a);

  if (delta < 0 || a == 0) {
    printf("Impossivel calcular\n");
  } else {
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }
}
