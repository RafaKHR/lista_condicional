#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float x, y;
	
	printf("Digita os dois valores que serão utilizados: ");
	scanf("%f%f", &x, &y);
	
	if (x > 0 && y > 0)
		printf("O ponto está no quadrante Q1");
	else if (x > 0 && y < 0)
		printf("O ponto está no quadrante Q4");
	else if (x < 0 && y > 0)
		printf("O ponto está no quadrante Q2");
	else if (x < 0 && y < 0)
		printf("O ponto está no quadrante Q3");
	else if (x == 0 && y == 0)
		printf("O ponto está na Origem");
	else if (x == 0)
		printf("O ponto está no Eixo X");
	else if (y == 0) 
		printf("O ponto está no Eixo Y");
}
