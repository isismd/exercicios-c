#include <stdio.h>
#include <stdlib.h>

/* Gratuidade - regras: 
	1 - Maior que 60 anos
	2 - Estudante
	3 - Cadastro de pcd
*/

int main() {
	int idade = 59;
	int estudante = 1; // 1 - estudante; 0 - não
	int cadastroPCD = 0; // 1 - sim; 0 - não
	
	if(idade >= 60) {
		printf("Tem direito de idoso \n");
	} else {
		printf("Nao tem direito de idoso \n");
	}
	
	if (estudante == 1) {
		printf("Estudante \n");
	} else {
		printf("Nao possui cadastro de estudante \n");
	}
	
	if (cadastroPCD == 1) {
		printf("Gratuidade PCD");
	} else {
		printf("Nao possui cadastro PCD");
	}
	
	return 0;
}
