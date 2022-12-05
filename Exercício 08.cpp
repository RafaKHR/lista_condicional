#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char estadoDesejado[2];
	float valorProduto, valorMg, valorSp, valorRj, valorMs;
	
	printf("Digite o valor do protudo: ");
	scanf("%f", &valorProduto);
	printf("Digite a sigla do estado desejado: ");
	scanf("%s", &estadoDesejado);
		fflush(stdin);
	if (strcmp(estadoDesejado, "MG") == 0){
		valorMg = valorProduto * 7 / 100;
		printf("O valor deste produto no estado de MG é: %.3f", valorMg);
	}
	else if (strcmp(estadoDesejado, "SP") == 0){
		valorSp = valorProduto * 12 / 100;
		printf("O valor deste produto no estado de SP é: %.3f", valorSp);
	}
	else if (strcmp(estadoDesejado, "RJ") == 0){
		valorRj = valorProduto * 15 / 100;
		printf("O valor deste produto no estado de RJ é: %.3f", valorRj);
	}
	else if (strcmp(estadoDesejado, "MS") == 0){
		valorMs = valorProduto * 8 / 100;
		printf("O valor deste produto no estado de MS é: %.3f", valorMs);
	}
	else printf("O estado digitado não é válido!");
		
}
