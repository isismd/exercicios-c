// beecrowd | 1064
// Positivos e Média
// Adaptado por Neilor Tonin, URI  Brasil

// Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

// Entrada
// A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

// Saída
// O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.

#include <stdio.h>

int main(void) {
  double num, total = 0, media = 0;
  int i, positivos = 0;
  
  for (i = 1; i <= 6; i++) {
    scanf("%lf", &num);
    if (num > 0) {
      positivos += 1;
      total += num;
    }
  }
  media = total / positivos;

  printf("%d valores positivos\n", positivos);
  printf("%.1lf\n", media);
}
