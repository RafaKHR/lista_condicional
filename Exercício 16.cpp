#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int ddd;
	
	printf("Digite o n�mero de DDD desejado: ");
	scanf("%d", &ddd);
	
	switch (ddd){
		case 61: printf("O DDD informado � da cidade de Bras�lia"); break;
		case 71: printf("O DDD informado � da cidade de Salvador"); break;
		case 11: printf("O DDD informado � da cidade de S�o Paulo"); break;
		case 21: printf("O DDD informado � da cidade de Rio de Janeiro"); break;
		case 32: printf("O DDD informado � da cidade de Juiz de Fora"); break;
		case 19: printf("O DDD informado � da cidade de Campinas"); break;
		case 27: printf("O DDD informado � da cidade de Vit�ria"); break;
		case 31: printf("O DDD informado � da cidade de Belo Horizonte"); break;
		default: printf("O DDD informado � de uma cidade no Brasil sem identifica��o");	
	}
}

