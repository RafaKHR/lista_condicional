#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float x, y;
	
	printf("Digita os dois valores que ser�o utilizados: ");
	scanf("%f%f", &x, &y);
	
	if (x > 0 && y > 0)
		printf("O ponto est� no quadrante Q1");
	else if (x > 0 && y < 0)
		printf("O ponto est� no quadrante Q4");
	else if (x < 0 && y > 0)
		printf("O ponto est� no quadrante Q2");
	else if (x < 0 && y < 0)
		printf("O ponto est� no quadrante Q3");
	else if (x == 0 && y == 0)
		printf("O ponto est� na Origem");
	else if (x == 0)
		printf("O ponto est� no Eixo X");
	else if (y == 0) 
		printf("O ponto est� no Eixo Y");
}
