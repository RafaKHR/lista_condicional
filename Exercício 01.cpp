#include<stdio.h>
int main(){
	int n1, n2;
	printf("Digite o primeiro numero e o segundo: ");
	scanf("%d%d", &n1, &n2);
	if(n1 > n2)
	printf("O maior eh: %d", n1);
	else printf("O maior eh: %d", n2);
}
