#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numeroX;
	float raiz, quadrado;
	
	printf("Digite o n�mero desejado: ");
	scanf("%d", &numeroX);
	
	if (numeroX > 0)
	{
	quadrado = pow(numeroX, 2);
	raiz = sqrt(numeroX);
	printf("O quadrado do n�mero digitado �: %.2lf\n", quadrado);
	printf("A raiz do n�mero digitado �: %.2lf", raiz);
	}
	else printf("O n�mero digitado n�o � positivo!");
}
