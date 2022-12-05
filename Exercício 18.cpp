#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	
	printf("Digite o número desejado: ");
	scanf("%d", &numero);
	
	if (numero % 3 == 0 && numero % 5 != 0)
		printf("O número escolhido é divisível por 3, mas não por 5");
	else if (numero % 5 == 0 && numero % 3 != 0)
		printf("O número escolhido é divisível por 5, mas não por 3");
	else printf("Este número não é válido, pois é divisível por 3 e por 5 ao mesmo tempo!");
}
