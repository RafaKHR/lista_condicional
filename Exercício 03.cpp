#include<stdio.h>
int main(){
	int numeroDesejado;
	printf("Digite o numero desejado: ");
	scanf("%d", &numeroDesejado);
	if ((numeroDesejado % 2) == 0)
	printf("Este numero eh par!");
	else printf("Este numero eh impar!");
}
