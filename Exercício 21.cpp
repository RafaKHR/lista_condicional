#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, delta, raizUm, raizDois, raizUnica;
	
	printf("Digite o valor de A, B e C, respectivamente, nesta equação: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a != 0 && b != 0 && c != 0){
		printf("\nA equação de 2° grau foi formada: (%.0f) * x^2 + (%.0f) * x + (%.0f) = 0\n", a, b, c);
		printf("\nVamos agora encontrar o X da equação!\n");
		
		delta = pow(b, 2) - (4 * (a) * (c));
	
		if (delta < 0)
			printf("\nNão existe raiz!\n");
		else if (delta == 0){
			printf("\nRaiz única!\n");
			
			raizUnica = (- b + sqrt(delta)) / (2 * a);
			
			printf("\nRaiz única: %.0f\n", raizUnica);
		}
		else if (delta > 0){
			printf("\nExistem duas raizes!\n");
	
			raizUm = (- b + sqrt(delta)) / (2 * a);
			raizDois = (- b - sqrt(delta)) / (2 * a);
	
			printf("\nRaiz número 1: %.0f\n", raizUm);
			printf("\nRaiz número 2: %.0f\n", raizDois);
		}	
	}else if (a == 0)
		printf("A variável 'a' não pode ser zero!");
	else if (b == 0)
		printf("A variavel 'b' não pode ser zero!");
	else if (c == 0)
		printf("A variavel 'c' não pode ser zero!");
}
	
