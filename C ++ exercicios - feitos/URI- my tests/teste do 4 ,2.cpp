#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
int x,tam;
int ca;
char nome[4];

printf("Digite SEU NOME : ");
gets(nome);
tam = strlen(nome);

printf("\n\nA SEU NOME  TEM :\n");
printf("\n%d letra A(s)",tam);
printf("\n\n");
printf("obrigado por usar 'AS'3000'\n\n");
system("pause");
return 0;
}
