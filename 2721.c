// beecrowd | 2721
// Indecisão das Renas
// Por Francisco Elio Parente Arcos Filho, UEA BR Brazil

// Timelimit: 1
// Esse ano as Renas do papai Noel decidiram que Rudolph não seria mais aquele que sempre ficaria à frente. Elas escolheriam de forma justa entre elas quem iria encabeçar o trenó. E nada é mais justo que o acaso.

// Então optaram pela seguinte forma para escolher: Cada Rena faria a quantidade que quisesse de bolas de neve, sem as outras verem. Depois, todas as bolas de neve de todas as Renas seriam reunidas em uma única e grande pilha. Por último, as bolas de neve seriam tiradas dessa pilha, uma a uma, e distribuídas entre elas sempre seguindo a ordem: Dasher, Dancer, Prancer, Vixen, Comet, Cupid, Donner, Blitzen e Rudolph. Até que se acabassem as bolas de neve. A rena que ficasse com a última bola de neve seria declarada vencedora e ficaria na posicão principal do trenó este ano.

// Dado o número de bolas de neve feitas por cada Rena, determine qual Rena ganhou o sorteio.

// Entrada
// A entrada é composta por uma única linha contendo 9 números inteiros Ai (1 ≤ Ai ≤ 104).

// Saída
// A saída é composta por uma única linha contendo o nome da Rena vencedora.

#include <stdio.h>

int main(void) {
  int bolas[9], i, soma = 0, vencedora;

  for (i = 0; i < 9; i++){
    scanf("%d", &bolas[i]);
    soma = soma + bolas[i];
  }

  vencedora = soma % 9;

  if (vencedora == 1){
    printf("Dasher\n");
  } else if (vencedora == 2){
    printf("Dancer\n");
  } else if (vencedora == 3){
    printf("Prancer\n");
  } else if (vencedora == 4){
    printf("Vixen\n");
  } else if (vencedora == 5){
    printf("Comet\n");
  } else if (vencedora == 6){
    printf("Cupid\n");
  } else if (vencedora == 7){
    printf("Donner\n");
  } else if (vencedora == 8){
    printf("Blitzen\n");
  } else {
    printf("Rudolph\n");
  }
  
}
