#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num1, num2, num3, calculo;
	float geometrica, ponderada, harmonica, aritmetica;
	printf("Digite os 3 números desejados: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("Digite o modo que quer utilizar os números digitados: ");
	scanf("%d", &calculo);
	
	switch (calculo){
		case 1: 
		        geometrica = num1 * num2 * num3;
			   	printf("O resultado é: %.2f", geometrica);
				break;
		case 2:
				ponderada = num1 + 2 * num2 + 3 * num3 / 6;
				printf("O resultado é: %.2f", ponderada);
				break;
		case 3:
				harmonica = 1 / ((1 / num1) + (1 / num2) + (1 / num3));
				printf("O resultado é: %.2f", harmonica);
				break;
		case 4: aritmetica = num1 + num2 + num3 / 3;
				printf("O resultado é: %.2f", aritmetica);
				break;
		default: printf("Valor inválido!");
	}
}
