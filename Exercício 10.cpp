#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float altura, peso;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	if (altura < 1.20){
		if (peso < 60)
			printf("Sua classifica��o � A");
		else if (peso >= 60 && peso <= 90)
			printf("Sua classifica��o � D");
		else if (peso > 90)
			printf("Sua classifica��o � G");
	}
	else if (altura >= 1.20 && altura <= 1,70){
		if (peso < 60)
			printf("Sua classifica��o � B");
		else if (peso >= 60 && peso <= 90)
			printf("Sua classifica��o � E");
		else if (peso > 90)
			printf("Sua classifica��o � H");
	}
	else if (altura > 1,70)
		if (peso < 60)
			printf("Sua classifica��o � C");
		else if (peso >= 60 && peso <= 90)
			printf("Sua classifica��o � F");
		else if (peso > 90)
			printf("Sua classifica��o � I");
}
