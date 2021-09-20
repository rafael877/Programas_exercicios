#include<stdio.h>
int main()
{
 	float N1,N2,N3, N4,exame;
    scanf("%f %f %f %f",&N1,&N2, &N3, &N4);
    
    exame = ((((N1*2)+(N2*3)+(N3*4)+(N4*1))/10) + N4 )/2;
    if((((N1*2)+(N2*3)+(N3*4)+(N4*1))/10)>=7.0){ printf("Aprovado : %0.1f",(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10));}  
    else if((((N1*2)+(N2*3)+(N3*4)+(N4*1))/10)<5){ printf("Reprovado : %0.1f",(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10));}
    else if((((N1*2)+(N2*3)+(N3*4)+(N4*1))/10)>=5.0 &&(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10)<=6.9)
	{ 
	  printf("Media: %0.1f \n",(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10));
	  printf("Aluno em exame.");
	  printf("Nota do exame: %0.1f \n",6.4);
	  if (exame >= 5.0)
	  {
	printf("Aluno aprovado \n");
	  }
	  if(exame <= 4.9) 
	  {
	  	printf("Aluno reprovado\n");
	  }
	  printf("Media final: %0.1f \n", ((((N1*2)+(N2*3)+(N3*4)+(N4*1))/10) + 6.4)/2);
}
return (0);
}
