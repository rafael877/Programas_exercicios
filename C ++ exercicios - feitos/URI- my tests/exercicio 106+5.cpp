#include <stdio.h>

int main() {
 int num1,num,cont;
  cont=0;
    for(num1=0;num1<=6;num1++){
        scanf("%d",&num);
        if(num%2==0)
            cont++;
    }
    printf("%d valores pares\n",cont);

    return 0;
}

