#include <stdio.h>
int main ()
{ 
int num;
scanf ("%d",& num);
for(int i=0;i<=num;++i)
 { 
if (i%2 == 1) 
printf("%i\n",i);
 }
return(0);
}
