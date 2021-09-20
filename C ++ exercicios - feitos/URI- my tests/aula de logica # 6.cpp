#include <stdio.h>
#include <locale.h>

main(){

	int num1,num2;

num1 = 12;
num2 = 35;

printf("Exemplos utilizando Operadores logicos \n");
// opwrador &
printf("Maiior que com && \n");
printf("%d\n", false && false);
printf("%d\n", true  && false);
printf("%d\n", false && true);
printf("%d\n", true  && true );


//------------------------------------------------------------

// opoerador "OU"
printf("maior que com || \n");
printf("%d\n", false ||  false);
printf("%d\n", false|| true);
printf("%d\n", true  || true );

//------------------------------------------------------------

//operador "não"
printf("Maior que com nao  \n");
printf(" inverso de false = %d\n", !false);
printf("inverso de  true  = %d\n",  !true);


  
}





	


