#include <stdio.h>

int main() {
 int a,b,cont;
  cont=0;
    for(a=1;a<=5;a++){
        scanf("%d",&b);
        if(b%2==0)
            cont++;
    }
    printf("%d valores pares\n",cont);
    
    for(a=1;a<=5;a++){
        scanf("%d",&b);
        if(b%2==1)
            cont++;
    }
    printf("%d valores impares\n",cont);
    

    return 0;
}





