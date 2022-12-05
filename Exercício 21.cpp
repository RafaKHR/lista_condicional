#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, delta, raizUm, raizDois, raizUnica;
	
	printf("Digite o valor de A, B e C, respectivamente, nesta equa��o: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a != 0 && b != 0 && c != 0){
		printf("\nA equa��o de 2� grau foi formada: (%.0f) * x^2 + (%.0f) * x + (%.0f) = 0\n", a, b, c);
		printf("\nVamos agora encontrar o X da equa��o!\n");
		
		delta = pow(b, 2) - (4 * (a) * (c));
	
		if (delta < 0)
			printf("\nN�o existe raiz!\n");
		else if (delta == 0){
			printf("\nRaiz �nica!\n");
			
			raizUnica = (- b + sqrt(delta)) / (2 * a);
			
			printf("\nRaiz �nica: %.0f\n", raizUnica);
		}
		else if (delta > 0){
			printf("\nExistem duas raizes!\n");
	
			raizUm = (- b + sqrt(delta)) / (2 * a);
			raizDois = (- b - sqrt(delta)) / (2 * a);
	
			printf("\nRaiz n�mero 1: %.0f\n", raizUm);
			printf("\nRaiz n�mero 2: %.0f\n", raizDois);
		}	
	}else if (a == 0)
		printf("A vari�vel 'a' n�o pode ser zero!");
	else if (b == 0)
		printf("A variavel 'b' n�o pode ser zero!");
	else if (c == 0)
		printf("A variavel 'c' n�o pode ser zero!");
}
	
