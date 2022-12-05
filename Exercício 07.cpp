#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int a, b, c, d, somaCd, somaAb;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o teceiro valor: ");
	scanf("%d", &c);
	printf("Digite o quarto valor: ");
	scanf("%d", &d);
	
	somaCd = c + d;
	somaAb = a + b;
	
	if (b > c, d > a, somaCd > somaAb, c > 0, d > 0, a % 2 == 0)
		printf("Valores aceitos");
		else printf("Valores não aceitos");
}

