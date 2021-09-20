#include <stdio.h>

int main() {

    int num,contA=0,contG=0,contD=0;

    do{
        scanf("%i",&num);
             if(num==1){contA++;}
        else if(num==2){contG++;}
        else if(num==3){contD++;}
    }while(num!=4);

     printf("MUITO OBRIGADO\n");
     printf("Alcool: %i\n",contA);
     printf("Gasolina: %i\n",contG);
     printf("Diesel: %i\n",contD);

    return 0;
}
