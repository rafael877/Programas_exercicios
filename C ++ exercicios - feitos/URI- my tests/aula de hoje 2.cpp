#include <stdio.h>

int quadrado(int valor){
    valor=valor * valor;
    return valor;
}

void quadradonatela(int valor){
    valor=valor * valor;
    printf("\n quadrado do quadrado: %d", valor);
}


main(){
    int valor, resultado, resultado2;
    printf("\nDigite um numero: ");
    scanf("%d", &valor);

    resultado=quadrado(valor);
    printf("\nquadrado: %d", resultado);
    resultado2=quadrado(resultado);
    printf("\nquadrado do quadrado: %d", resultado2);

}
