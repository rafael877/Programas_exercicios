#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

main()

{
    int i, x, aux, v[6];
    
    for(i=0;i<6;i++)
    {
        printf("digite um numero %i:  ",i);
	    scanf("%i",&v[i]);
	}
 	    for(i=0;i<6;i++)
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
   	printf("\no valor da posicao %1 agora eh %i", i, v [i]);
   }

printf("\n\n");
system("pause");
return (0);
}
