#include <stdio.h>
int main (void)
{
	float nota_final, frequencia;
	
	printf("digite a nota final do aluno: ");
	scanf("%f",&nota_final);
	
	printf("digite a frequencia do aluno: ");
	scanf("%f",&frequencia);
	
	if (nota_final >= 6.0 && frequencia >= 75 )
	printf("\n    aluno APROVADO \n\n");
	
	else
	printf("\n    aluno REPROVADO \n");
	
	
	
	
	/*if (nota_final > frequencia)
	{
	
	printf("\n\n aluno reprovado por falta de nota");
    }
	
	else
	printf("\n\n aluno reprovado por falta de frquencia");*/
	
	
	
	
	
	if(nota_final < 6.0 && frequencia < 75)	
	 {
	printf("\n\n aluno reprovado por falta de nota e falta de frequencia");
	}
	else{
	
	if(nota_final < 6.0) {
	printf("\n\n aluno reprovado por falta de nota");
	}
    if(frequencia < 75)
	printf("\n\n aluno reprovado por falta de frequencia");
}
	
	
	printf("\n\n\n\n         o programa rodou certin       ");
	return (0);
}

