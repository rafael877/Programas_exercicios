#include<stdio.h>
#include<stdlib.h>
main()
{
 int A;
 printf("DIGITE UM NUMERO ENTRE 1 e 4: ");
 scanf("%d",&A);
 while(A<1||A>4)
 {
 printf("\n ENTRADA INVALIDA !!! \n DIGITE NOVAMENTE um numero entre 1 e 4, Por Favor: ");
 scanf("%d",&A);
 }
 printf("\n\no numero digitado  eh :%d",A);
 printf("\n\n");
 printf("muitissimo obrigado\n\n ");
 system("pause");
 return(0);
 }


