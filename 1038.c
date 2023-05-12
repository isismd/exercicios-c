// beecrowd | 1038
// Lanche
// Adaptado por Neilor Tonin, URI  Brasil

// Com base na tabela abaixo, escreva um programa que leia o código de um item e
// a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

// Entrada
// O arquivo de entrada contém dois valores inteiros correspondentes ao código e
// à quantidade de um item conforme tabela acima.

// Saída
// O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a
// ser pago, com 2 casas após o ponto decimal.

#include <stdio.h>

int main() {
  double preco, quantidade;
  int codigo;

  scanf("%d %lf", &codigo, &quantidade);

  if (codigo == 1) {
    preco = quantidade * 4.00;
    printf("Total: R$ %.2lf\n", preco);
  } else if (codigo == 2) {
    preco = quantidade * 4.50;
    printf("Total: R$ %.2lf\n", preco);
  } else if (codigo == 3) {
    preco = quantidade * 5.00;
    printf("Total: R$ %.2lf\n", preco);
  } else if (codigo == 4) {
    preco = quantidade * 2.00;
    printf("Total: R$ %.2lf\n", preco);
  } else if (codigo == 5) {
    preco = quantidade * 1.50;
    printf("Total: R$ %.2lf\n", preco);
  }

  return 0;
}
