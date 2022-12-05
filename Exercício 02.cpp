#include<stdio.h>
int main(){
	int numero1, numero2;
	printf("Digite o primeiro e segundo numero: ");
	scanf("%d%d", &numero1, &numero2);
	if (numero1 > numero2)
	printf("O maior numero eh: %d", numero1);
	else if (numero2 > numero1) 
		printf("O maior numero eh: %d", numero2);
	else if (numero1 == numero2)
		printf("Numeros Iguais");
}
