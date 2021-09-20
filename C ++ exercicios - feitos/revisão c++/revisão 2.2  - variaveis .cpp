#include<stdio.
int main(void)
char conceito; //variavel do tipo char armazena um unico caracter na memoria

float nota;
int numero;
printf("Informe o conceito do aluno: ");
scanf("Xc",&conceito);
printf("Digite a nota do aluno: ");
scanf("%f", &nota);

printf("Informe o numero de matricula do aluno: ");
scanf("%d",&numero);
printf("\nMatricula %d \n", numero);
printf("Conceito: %c \n", conceito);
printf("Nota: %.If\n", nota);//formatando a saida da nota com uma casa decimal
return 0;	
