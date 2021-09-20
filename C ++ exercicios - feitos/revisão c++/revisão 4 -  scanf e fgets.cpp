#include<stdio.h>
int main(void)
{
 char nome[11]; 

  printf ( "Digite seu nome: ");
   scanf ( "%s", nome) ;
   
  fgets (nome, 11, stdin); I
   printf ("0 nome armazenado foi: %s", nome); 
  
    printf("\n\n    deu bom\n\n"); 	
	return 0;
}
