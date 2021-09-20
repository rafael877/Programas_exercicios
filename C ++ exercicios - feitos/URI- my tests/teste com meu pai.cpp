#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>




main()
{
	setlocale(LC_ALL,"portuguese");
	
    int i, x, aux, v[6];
    
    for(i=0;i<6;i++)//comando para leitura de valores
    {
    	printf("Digite o valor da posicao %i: ",i);
    	scanf("%i",&v[i]);
	}
	
 	    for(i=0;i<6;i++)// comando para ordenação
 	    {
		 		for(x=i+1;x<6;x++)
	        	{
					if(v[i]>v[x])
		        	{
			         aux=v[i];
			         v[i]=v[x];
			         v[x]=aux;
                   	}
                }
        }		
        
                       for(i=0;i<6;i++)
                       {
                    	printf("\nO valor da posicao %i agora eh %i",i,v[i]);
                       }
 getchar();
 printf("\n\n");
 system("pause");
 return (0);
}
