// beecrowd | 1019
// Conversão de Tempo
// Adaptado por Neilor Tonin, URI  Brasil

// Leia um valor inteiro, que é o tempo de duração em segundos de um determinado
// evento em uma fábrica, e informe-o expresso no formato
// horas:minutos:segundos.

// Entrada
// O arquivo de entrada contém um valor inteiro N.

// Saída
// Imprima o tempo lido no arquivo de entrada (segundos), convertido para
// horas:minutos:segundos, conforme exemplo fornecido.


#include <stdio.h>

int main() {
  int n, segundos, horas, minutos;

  scanf("%d", &n);
  horas = n / 3600;
  minutos = (n % 3600) / 60;
  segundos = (n % 60);

  printf("%d:%d:%d\n", horas, minutos, segundos);
  return 0;
}
