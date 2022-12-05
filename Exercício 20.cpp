#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float nota1, nota2, nota3, nota4, media, exame, mediaRecalculada;
	
	printf("Digite as quatro notas do aluno em destaque: ");
	scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / (2 + 3 + 4 + 1);
	
	printf("\nMedia: %.1f\n", media);
	
	if (media >= 7.0)
		printf("\nAluno aprovado!");
	else if (media < 5.0)
		printf("\nAluno reprovado!");
	else if (media >= 5.0 && media < 7.0){
		printf("\nAluno em exame!\n");
		printf("\nDigite o valor do exame do aluno em destaque: ");
		scanf("%f", &exame);
	
		printf("\nNota do exame: %.1f\n", exame);
	
		mediaRecalculada = (exame + media) / 2;
	
		if (mediaRecalculada >= 5.0)
			printf("\nAluno aprovado!\n");
		else if (mediaRecalculada < 5.0)
			printf("\nAluno reprovado!\n");
		
		printf("\nMedia final: %.1f", mediaRecalculada);
	}
}
