#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	
	printf("Digite o n�mero desejado: ");
	scanf("%d", &numero);
	
	if (numero % 3 == 0 && numero % 5 != 0)
		printf("O n�mero escolhido � divis�vel por 3, mas n�o por 5");
	else if (numero % 5 == 0 && numero % 3 != 0)
		printf("O n�mero escolhido � divis�vel por 5, mas n�o por 3");
	else printf("Este n�mero n�o � v�lido, pois � divis�vel por 3 e por 5 ao mesmo tempo!");
}
