#include<stdio.h>
int main ()
{                                                                         
	int i;
	
	printf (" coloque um numero :\n");
	scanf ("%d", &i  );
	
	
	
if(i >= 18 && i <= 65 )
	
	{
	printf("eleitor obrigatorio  ");
	}
	
	
	
	
if(i < 16  )
{
	printf(" NAO eleitor ");
}



if( i < 18 && i >= 65  )
{
	printf(" ELEITOR facultativo ");
}




if (i >= 16 )
	{
		printf(" eleitor facultativo");
	}
	return (0);
	
	}
