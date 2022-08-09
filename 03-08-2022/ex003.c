#include <stdio.h>
#include <stdlib.h>

//  Criar um algoritmo que receba a quantidade de km e o combustível utilizado e apresentando o resultado.

int main() {
    float km, combustivel, total;
    printf("Digite a quantia de km andada");
    scanf("%f", &km);

    printf("Digite a quantia de de combustivel gasta");
    scanf("%f", &combustivel);

    total = combustivel/km;

    printf("Você gastou %.2f litros de combustivel por km", total);
}