#include <stdio.h>
#include <stdlib.h>

/* Gratuidade - regras: 
	1 - Maior que 60 anos
	2 - Estudante
	3 - Cadastro de pcd
*/

int main() {
	int idade;
	int estudante; // 1 - estudante; 0 - não
	int cadastroPCD; // 1 - sim; 0 - não

	printf("Digite sua idade \n");
	scanf("%d", &idade);
	
	printf("Voce eh estudante? 1 = sim, 0 = nao \n");
	scanf("%d", &estudante);
	
	printf("Voce possui cadastro PCD? 1 = sim, 0 = nao \n");
	scanf("%d", &cadastroPCD);
	
	
	/* if(idade >= 60 || estudante == 1 || cadastroPCD == 1){
		printf("Tem direito");
	} else {
		printf("Nao tem direito");
	} */
	
	(idade >= 60 || estudante == 1 || cadastroPCD == 1) ? printf("Tem direito") : printf("Nao tem direito");
	
	
	return 0;
}
