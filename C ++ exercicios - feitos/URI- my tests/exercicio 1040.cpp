#include<stdio.h>
int main()
{
 	float N1, N2, N3, N4, media, exame;
  	printf ("Digite as notas: ");
    scanf("%f %f %f %f %f",&N1,&N2, &N3, &N4,&exame);
    media = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/10);
    if(media>=7.0){ printf("Aprovado :  %0.1f", media);}  
    else if(media <5){ printf("Reprovado :  %0.1f", media);}
    else if(media >=5.0 && media <=6.9)
    { 
      if(media>5)
      scanf("%f",&exame);
	  printf("Media: %0.1f \n",  media);
	  printf("Aluno em exame: \n ");
	  printf ("Digite nota exame: ");
	  printf("Nota do exame: \n", exame);
	  printf("Aluno aprovado: \n");
	  printf("Media final:  %0.1f \n",  (media +exame)/2);
	  
	}   
	else if(media <5)
	  printf("Media: %0.1f \n",  media);
	  printf("Aluno em exame: \n ");
	  printf("Nota do exame: \n", exame);
	  printf("Aluno reprovado: \n");
	  printf("Media final:  %0.1f \n",  (media + exame)/2);
	
    
  
return (0);
}
