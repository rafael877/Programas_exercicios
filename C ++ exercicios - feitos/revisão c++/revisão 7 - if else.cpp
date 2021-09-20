#include<stdio.h>
int main(void)
{
	float nota1, nota2, media;
	
	printf("Digite a primeira nota do aluno: ");
	 scanf("%f", &nota1);
	
	printf( "Digite a segunda nota do aluno: ");
	 scanf("%f",&nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Media do aluno = %.1f\n",media);

	if (media >= 6)
	{
	printf("\n Aluno APROVADO \n") ;
    }
	else
	{
	printf("\n Aluno REPROVADO \n");
    }

   printf("\n\n deu bom \n\n\n");
	return 0;
}

