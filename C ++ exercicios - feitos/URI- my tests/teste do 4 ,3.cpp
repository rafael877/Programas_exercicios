#include <string.h>
# include <stdlib.h> 
# include <conio.h> 
#include <math.h>
#include <stdio.h> 
  main(){
  

char nome[30];

int B;

printf ("inform Um nome ");
 gets(nome);

for (B=0;B<=3;B++) {
printf("\%c",nome[B]);
}
printf ("\n\n");

system ("pause");
 return (0);
}
