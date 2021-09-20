#include <stdio.h>
int main(void)
{
  int A, B, Soma;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &A);
  
  printf("Digite outro numero inteiro: ");
  scanf("%d", &B);
  
  Soma = A + B;
  printf ("O Valor da soma = %d", Soma);
  
  if(Soma > 10)
  {
    printf("O valor da soma eh maior que 10\n");
  }
  
  system ("pause");
  return(0);
}
