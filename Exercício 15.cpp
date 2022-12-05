#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int dia;
	printf("Digite o número do dia da semana desejado: ");
	scanf("%d", &dia);
	
	switch (dia) {
		case 1: printf("Domingo"); break;
		case 2: printf("Segunda-Feira"); break;
		case 3: printf("Terça-Feira"); break;
		case 4: printf("Quarta-Feira"); break;
		case 5: printf("Quinta-Feira"); break;
		case 6: printf("Sexta-Feira"); break;
		case 7: printf("Sábado"); break;
		default : printf("O valor digitado é inválido!");
	}
}
