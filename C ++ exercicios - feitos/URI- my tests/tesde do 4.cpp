#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 5
#define MAX 80
int main ()
{
    /* Declarando um vetor de apontadores */
    char *mat[TAM];
    /* Declara um buffer para efetuar a leitura */
    char buffer[MAX];
    int i,j;
    printf("\nEntre com %d Frases:\n\n", TAM);
    for (i=0; i<TAM; i++)
    {
        gets(buffer);
        /* Aloca em mat[i] a quantidade de caracteres suficiente para armazenar o buffer */
        mat[i]=(char *) calloc((strlen(buffer)+1), sizeof(char));
        /* Testa se a alocação teve sucesso */
        if (!mat)
        {
            printf ("** Erro: Memoria Insuficiente **");
            for(j=0; j < i; j++)
                free(mat[j]);
            exit(1);
        }
        /* Copia a string, do buffer para o vetor de strings */
        strcpy(mat[i],buffer);
    }   
    printf("\nFrases digitadas");
    for(i=0; i<TAM; i++)
    printf("%s\n", mat[i]);
    for(j=0; j<TAM; j++)
    free(mat[j]);
}
