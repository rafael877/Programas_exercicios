#include <stdio.h>
int main (void)
{
    int x;
    while(1)
    {
        scanf("%d", & x);
        if (x == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        
         else if(x != 2002)
         printf ("Senha Invalida\n");
        
    }
    return(0);
}
