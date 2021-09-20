#include <stdio.h>

int main()
{
    int contA,contB,valor,Troca,Numero[30];
    valor = 6;
    printf("Digite 6 numeros aleatorios que nao se repitam\n");
    for (contA = 0; contA < valor; ++contA)
    scanf("%d",&Numero[contA]);
    for(contA = 0; contA < valor; ++contA)
    {
        for(contB = contA + 1; contB < valor; ++contB)
        {

        if(Numero[contA] > Numero[contB])
            {
            Troca = Numero[contA];
            Numero[contA] = Numero[contB];
            Numero[contB] = Troca;
            }
        }
    }

for(contA = 0; contA < valor; ++contA)
        printf("%d ", Numero[contA]);
        printf("\n\no codigo chegou ao fim");
}
