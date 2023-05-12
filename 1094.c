// beecrowd | 1094
// Experiências
// Adaptado por Neilor Tonin, URI  Brasil

// Maria acabou de iniciar seu curso de graduação na faculdade de medicina e
// precisa de sua ajuda para organizar os experimentos de um laboratório o qual
// ela é responsável. Ela quer saber no final do ano, quantas cobaias foram
// utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

// Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e
// coelhos. Para obter estas informações, ela sabe exatamente o número de
// experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade
// de cobaias utilizadas em cada experimento.

// Entrada
// A primeira linha de entrada contém um valor inteiro N que indica os vários
// casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia
// (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um
// caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo
// C:Coelho).

// Saída
// Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia
// utilizada e o percentual de cada uma em relação ao total de cobaias
// utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após
// o ponto.

#include <stdio.h>

int main() {
  int n, i, quantia = 0, total = 0, coelhos = 0, ratos = 0, sapos = 0;
  double perCoelhos, perRatos, perSapos;
  char tipo;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %c", &quantia, &tipo);
    total = total + quantia;
    if (tipo == 'R') {
      ratos = ratos + quantia;
    } else if (tipo == 'S') {
      sapos = sapos + quantia;
    } else {
      coelhos = coelhos + quantia;
    }
    quantia = 0;
  }

  perCoelhos = ((float)coelhos * 100) / total;
  perRatos = ((float)ratos * 100) / total;
  perSapos = ((float)sapos * 100) / total;

  printf("Total: %d cobaias\n", total);

  printf("Total de coelhos: %d\n", coelhos);
  printf("Total de ratos: %d\n", ratos);
  printf("Total de sapos: %d\n", sapos);

  printf("Percentual de coelhos: %.2lf %%\n", perCoelhos);
  printf("Percentual de ratos: %.2lf %%\n", perRatos);
  printf("Percentual de sapos: %.2lf %%\n", perSapos);

  return 0;
}
