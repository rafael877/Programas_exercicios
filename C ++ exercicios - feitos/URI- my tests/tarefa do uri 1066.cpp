#include <stdlib.h>
#include <stdio.h>
int main (void)
{
int num,num1,a,b=0,x,y=0,c,cont,cont1;

 
   
    for(x=1;x<=6;x++)
    {
        scanf("%lf", &a);
        if(a>=0)
        {
            y++;
            b+=a;
        }
    }
    c=b/y;
    printf ("%d valores positivos\n",y);
    printf("%.1lf\n", c);
    return 0;

 	if (num >= 0.0){
 
 	for(num1=1;num1<=5;num1++){
        scanf("%d",&num);
        if(num%2==0)
            cont++;
    }
    printf("%d valores pares\n",cont);
  } 
  else if (num <= 0.0)
  {for(num1=1;num1<=5;num1++){
        scanf("%d",&num);
        if(num1%2==1)
            cont1++;
    }
    printf("%d valores impares\n",cont1);
  }
}

