#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float salario, emprestimo, vintePorCento;
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	printf("Digite o valor do empréstimo desejado: ");
	scanf("%f", &emprestimo);
	
	vintePorCento = 20 * salario / 100;
	
	if (emprestimo > vintePorCento)
		printf("Empréstimo não concedido.");
		else printf("Empréstimo concedido.");
}
