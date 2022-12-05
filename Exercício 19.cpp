#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	double valor;
	int notaCem, notaCinquenta, notaVinte, notaDez, notaCinco, notaDois;
	int moedaUm, moedaCinquenta, moedaVinteCinco, moedaDez, moedaCinco;
	
	printf("Digite a quantia de dinheiro desejada: ");
	scanf("%lf", &valor);
	
	notaCem = valor / 100;
	valor = valor - (notaCem * 100);
	
	notaCinquenta = valor / 50;
	valor = valor - (notaCinquenta * 50);
	
	notaVinte = valor / 20;
	valor = valor - (notaVinte * 20);
	
	notaDez = valor / 10;
	valor = valor - (notaDez * 10);
	
	notaCinco = valor / 5;
	valor = valor - (notaCinco * 5);
	
	notaDois = valor / 2;
	valor = valor - (notaDois * 2);
	
	moedaUm = valor / 1;
	valor = valor - (moedaUm * 1);
	
	moedaCinquenta = valor / 0.50;
	valor = valor - (moedaCinquenta * 0.50);
	
	moedaVinteCinco = valor / 0.25;
	valor = valor - (moedaVinteCinco * 0.25);
	
	moedaDez = valor / 0.10;
	valor = valor - (moedaDez * 0.10);
	
	moedaCinco = valor / 0.05;
	valor = valor - (moedaCinco * 0.05);
	
	printf("\nNOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", notaCem);
	printf("%d nota(s) de R$ 50.00\n", notaCinquenta);
	printf("%d nota(s) de R$ 20.00\n", notaVinte);
	printf("%d nota(s) de R$ 10.00\n", notaDez);
	printf("%d nota(s) de R$ 5.00\n", notaCinco);
	printf("%d nota(s) de R$ 2.00\n", notaDois);
	
	printf("\nMOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moedaUm);
	printf("%d moeda(s) de R$ 0.50\n", moedaCinquenta);
	printf("%d moeda(s) de R$ 0.25\n", moedaVinteCinco);
	printf("%d moeda(s) de R$ 0.10\n", moedaDez);
	printf("%d moeda(s) de R$ 0.05\n", moedaCinco);
}
