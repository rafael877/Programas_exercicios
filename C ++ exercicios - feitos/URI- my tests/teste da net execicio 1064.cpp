#include<stdio.h>
#include<stdlib.h>
main()
{

      int num, resp;

      printf ("Entre com um numero: ");
      scanf ("%d", &num);
      resp = num % 2;

        if (num == 0)
        {
        printf ("O numero 0 eh par");
        } else if (resp == 0 && num > 0)
            {
            printf ("O numero eh par e positivo");
            } else if (resp == 0 && num < 0)
              {
              printf ("O numero eh par e negativo");
              } else if (resp == 1 && num > 0)
                {
                printf ("O numero eh impar e positivo");
                } else
                  {
                  printf ("O numero eh impar e negativo");
                  }
     return(0);

}
