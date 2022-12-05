#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char operador;
	float n1, n2, resultado;
	
	printf("Qual operecao vc quer realizar?: ");
	scanf("%c", &operador);
	printf("Digite os numeros: ");
	scanf("%f%f", &n1, &n2);
	
	switch (operador) {
		case '+':
			resultado = n1 + n2;
			printf("Soma: %.2f", resultado);
		break;
		case '-' :
			resultado = n1 - n2;
			printf("Subtracao: %.2f", resultado);
		break;
		case '*' :
			resultado = n1 * n2;
			printf("Multiplicacao: %.2f", resultado);
		break;
		case '/' :
			resultado = n1 / n2;
			printf("Divisao: %.2f", resultado);
		break;
		case '^' :
			resultado = pow (n1, n2);
			printf("Potencia %.2f", resultado);
		break;
		case 'r' :
			resultado = sqrt(n1);
			printf("Raiz: %.2f", resultado);
		break;
		default : printf("Invalido!");
	}
}
