#include <stdio.h>
#include <stdlib.h>

// 1) Criar um Algoritmo que verifique se a pessoa pode ter CNH e apresente o resultado.
int main(){
    int idade = 0;
    printf("Digite sua idade");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Pode ter CNH!");
    } 
    else {
        printf("Não pode ter CNH");
    }
}