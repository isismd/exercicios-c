// beecrowd | 2242
// Huaauhahhuahau
// Por Maratona de Programação da SBC 2016 BR Brazil

// Em chats, é muito comum entre jovens e adolescentes utilizar sequências de letras, que parecem muitas vezes aleatórias, para representar risadas. Alguns exemplos comuns são:

// huaauhahhuahau
// hehehehe
// ahahahaha
// jaisjjkasjksjjskjakijs
// huehuehue

// Cláudia é uma jovem programadora que ficou intrigada pela sonoridade das “risadas digitais”. Algumas delas ela nem mesmo consegue pronunciar! Mas ela percebeu que algumas delas parecem transmitir melhor o sentimento da risada que outras. A primeira coisa que ela percebeu é que as consoantes não interferem no quanto as risadas digitais influenciam na transmissão do sentimento. A segunda coisa que ela percebeu é que as risadas digitais mais engra¸cadas são aquelas em que as sequências de vogais são iguais quando lidas na ordem natural (da esquerda para a direita) ou na ordem inversa (da direita para a esquerda), ignorando as consoantes. Por exemplo, “hahaha” e “huaauhahhuahau” estão entre as risadas mais engraçadas, enquanto “riajkjdhhihhjak” e “huehuehue” não estão entre as mais engraçadas.

// Cláudia está muito atarefada com a análise estatística das risadas digitais e pediu sua ajuda para escrever um programa que determine, para uma risada digital, se ela é das mais engraçadas ou não.

// Entrada
// A entrada é composta por uma linha, contendo uma sequência de no máximo 50 caracteres, formada apenas por letras minúsculas sem acentuação. As vogais são as letras ‘a’,‘e’,‘i’,‘o’,‘u’. A sequência contém pelo menos uma vogal.

// Saída
// Seu programa deve produzir uma linha contendo um caractere, “S” caso a risada seja das mais engra¸cadas, ou “N” caso contrário.

#include <stdio.h>
#include <string.h>

int main(void) {
  char risada[60], vogais[60];
  int i, j = 0, engracada = 0, tam;

  scanf("%s", risada);

  for (i = 0; i < strlen(risada); i++) {
    if ((risada[i] == 'a') || (risada[i] == 'e') || (risada[i] == 'i') ||
        (risada[i] == 'o') || (risada[i] == 'u')) {
      vogais[j] = risada[i];
      j++;
    }
  }

  vogais[j] = '\0';
  tam = strlen(vogais);

  for (i = 0, j = tam - 1; i < tam; i++, j--) {
    if (vogais[i] != vogais[j]) {
      engracada = 1;
    }
  }

  if (engracada == 0) {
    printf("S\n");
  } else {
    printf("N\n");
  }
}
