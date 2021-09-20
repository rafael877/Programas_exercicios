#include <stdio.h>

int main()
{
    int A,B,C,Troca,Numero[30];
    C = 6;
    printf("Digite 6 numeros aleatorios e nao repetidos\n");
    for (A = 0; A < C; ++A)
    scanf("%d",&Numero[A]);
    for(A = 0; A < C; ++A)
    {
        for(B = A + 1; B < C; ++B)
        {

        if(Numero[A] > Numero[B])
            {
            Troca = Numero[A];
            Numero[A] = Numero[B];
            Numero[B] = Troca;
            }
        }
    }

for(A = 0; A < C; ++A)
        printf("%d ", Numero[A]);
}

