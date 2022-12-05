#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float altura, pesoIdeal;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
		fflush(stdin);
	printf("Digite M para Masculino, e F para feminino: ");
	scanf("%c", &sexo);
	
	if (sexo = 'M')
		pesoIdeal = 72.7 * altura - 58;
		printf("Homens: (72,7 * %.2f) - 58\n", altura);
		printf("Seu peso ideal seria de : %.2f", pesoIdeal);
	
}
