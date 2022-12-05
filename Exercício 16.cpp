#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int ddd;
	
	printf("Digite o número de DDD desejado: ");
	scanf("%d", &ddd);
	
	switch (ddd){
		case 61: printf("O DDD informado é da cidade de Brasília"); break;
		case 71: printf("O DDD informado é da cidade de Salvador"); break;
		case 11: printf("O DDD informado é da cidade de São Paulo"); break;
		case 21: printf("O DDD informado é da cidade de Rio de Janeiro"); break;
		case 32: printf("O DDD informado é da cidade de Juiz de Fora"); break;
		case 19: printf("O DDD informado é da cidade de Campinas"); break;
		case 27: printf("O DDD informado é da cidade de Vitória"); break;
		case 31: printf("O DDD informado é da cidade de Belo Horizonte"); break;
		default: printf("O DDD informado é de uma cidade no Brasil sem identificação");	
	}
}

