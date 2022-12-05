#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int mesDesejado;
	
	printf("Digite o número do mês que deseja conhecer: ");
	scanf("%d", &mesDesejado);
	
	if (mesDesejado == 1)
		printf("Janeiro");
	else if (mesDesejado == 2)
		printf("Fevereiro");
	else if (mesDesejado == 3)
		printf("Março");
	else if (mesDesejado == 4)
		printf("Abril");
	else if (mesDesejado == 5)
		printf("Maio");
	else if (mesDesejado == 6)
		printf("Junho");
	else if (mesDesejado == 7)
		printf("Julho");
	else if (mesDesejado == 8)
		printf("Agosto");
	else if (mesDesejado == 9)
		printf("Setembro");
	else if (mesDesejado == 10)
		printf("Outubro");
	else if (mesDesejado == 11)
		printf("Novembro");
	else if (mesDesejado == 12)
		printf("Dezembro");
	else printf("O valor informado é inválido!");
}
