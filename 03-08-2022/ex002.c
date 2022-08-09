#include <stdio.h>
#include <stdlib.h>

// 2) Crie um Algoritmo que receba 4 notas e verifique se a média foi alcançada(7), caso contrário, exiba "Aluno em recuperação".
int main() {
    float n1, n2, n3, n4;
    float media;

    printf("Digite sua nota 1: ");
    scanf("%f", &n1);

    printf("Digite sua nota 2: ");
    scanf("%f", &n2);

    printf("Digite sua nota 3: ");
    scanf("%f", &n3);

    printf("Digite sua nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4)/4;
    printf("Media = %.2f \n", media);

    if (media >= 7) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno em recuperação");
    }

}