#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 18){
		switch(idade){
			case 5: printf("Categoria: Infantil A!"); break;
			case 6: printf("Categoria: Infantil A!"); break;
			case 7: printf("Categoria: Infantil A!"); break;
			case 8: printf("Categoria: Infantil B!"); break;
			case 9: printf("Categoria: Infantil B!"); break;
			case 10: printf("Categoria: Infantil B!"); break;
			case 11: printf("Categoria: Juvenil A!"); break;
			case 12: printf("Categoria: Juvenil A!"); break;
			case 13: printf("Categoria: Juvenil A!"); break;
			case 14: printf("Categoria: Juvenil B!"); break;
			case 15: printf("Categoria: Juvenil B!"); break;
			case 16: printf("Categoria: Juvenil B!"); break;
			case 17: printf("Categoria: Juvenil B!"); break;
			default: printf("Idade Invalida!");
		}
	}
	else printf("Categoria: Sênior!");
}
