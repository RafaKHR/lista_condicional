#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float salario, emprestimo, vintePorCento;
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &salario);
	printf("Digite o valor do empr�stimo desejado: ");
	scanf("%f", &emprestimo);
	
	vintePorCento = 20 * salario / 100;
	
	if (emprestimo > vintePorCento)
		printf("Empr�stimo n�o concedido.");
		else printf("Empr�stimo concedido.");
}
