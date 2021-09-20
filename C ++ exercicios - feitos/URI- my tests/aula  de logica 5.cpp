#include <stdio.h>
#include <locale.h>

main(){
	 setlocale(LC_ALL,"Portuguese");
	int num1;
	int num2;
	float num3;
	
	num1 = 12;
	num2 = 23; 
	num3= 35.9;
	
	//----------------------------------------------------------------------------------------------------------------------
	
	//quando o resultado da comparacao for 0 indica que falso       quando for 1 vai indicar q e verdadeiro
	//maior que 
	printf("maior que : ");
	printf("%d > %d ? %d ",num1, num2,  num1 >num2  );
	printf("\n")
	
	
	
	//maior que ou iqual 
		;printf("maior que ou iqual : ");
	printf("%d >= %d ? %d ",num1,12,num1 >= 12  );
	printf("\n")
	 
	 
	 
	 //----------------------------------------------------------------------------------------------------------------------
	 
	 //menor que 
	;printf("Menor que : ");
	printf("%d < %d ? %d ",num1, num2,  num1 <num2  );
	printf("\n")
	
		
	//maior que ou iqual 
		;printf("Menor que ou iqual : ");
	printf("%d <= %d ? %d ",num2,23,num1 <= 23 );
	printf("\n")
	;
	//-------------------------------------------------------------------------------------------------------------------------------------------------

		 //resto da divisao 
	;printf("resto da divião : ");
	printf("%d < %d ? %d ",num1, num2,  num1 <num2  );
	printf("\n")
	
		
	//iqual a 
		;printf("iqual a  : ");
	printf("o resto da divisao de %d por 2 ==0 ? %d ",num2, (num2 % 2 ) == 0 );
	printf("\n");
	
	
	//diferente de  
		;printf("diferente de : ");
	printf("%d != %d ? %d ",num2,num2,num1 != num2 );
	printf("\n")
	;
	
	
}

