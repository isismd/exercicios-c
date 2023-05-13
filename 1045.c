// beecrowd | 1045
// Tipos de Triângulos
// Adaptado por Neilor Tonin, URI  Brasil

// Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
// se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
// se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
// se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
// se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
// se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
// se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
// Entrada
// A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

// Saída
// Imprima todas as classificações do triângulo especificado na entrada.

#include <math.h>
#include <stdio.h>
int main(void) {
  double triangulo[3], aux;
  int i, j;

  scanf("%lf", &triangulo[0]);
  scanf("%lf", &triangulo[1]);
  scanf("%lf", &triangulo[2]);

  aux = triangulo[0];

  for (i = 0; i <= 2; i++) {
    for (j = i + 1; j <= 2; j++) {
      if (triangulo[j] > triangulo[i]) {
        aux = triangulo[i];
        triangulo[i] = triangulo[j];
        triangulo[j] = aux;
      }
    }
  }

  if (triangulo[0] >= triangulo[1] + triangulo[2]) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if ((pow(triangulo[0], 2)) ==
        (pow(triangulo[1], 2)) + (pow(triangulo[2], 2))) {
      printf("TRIANGULO RETANGULO\n");
    }
    if ((pow(triangulo[0], 2)) >
        (pow(triangulo[1], 2)) + (pow(triangulo[2], 2))) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((pow(triangulo[0], 2)) <
        ((pow(triangulo[1], 2)) + (pow(triangulo[2], 2)))) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if ((triangulo[0] == triangulo[1]) && (triangulo[0] == triangulo[2])) {
      printf("TRIANGULO EQUILATERO\n");
    }
    if (((triangulo[0] == triangulo[1]) && (triangulo[0] != triangulo[2])) ||
        ((triangulo[1] == triangulo[2]) && (triangulo[1] != triangulo[0])) ||
        ((triangulo[2] == triangulo[0]) && (triangulo[2] != triangulo[1]))) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
}
