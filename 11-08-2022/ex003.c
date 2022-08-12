#include <stdio.h>
#include <stdlib.h>


int main() {
	int valor;
	printf("Digite um numero \n");
	scanf("%d", &valor);
	
	(valor >= 0 && valor <=100 ) ? printf("maior que zero e menor que 100! \n") : printf("menor que 100! \n");
	return 0;
}
