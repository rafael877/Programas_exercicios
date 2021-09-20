#include <stdio.h>
 	int main(){
 		
 	int f;	
	float A,B,SALARIO;
	scanf("%d",&f); 
	scanf("%f %f",&A,&B); 
	SALARIO=A*B;
	printf("NUMERO = %d\n",f);
	printf("SALARIO = U$ %.2f\n",SALARIO);
	return(0);
}
