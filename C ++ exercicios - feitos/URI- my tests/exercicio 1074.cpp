#include <stdio.h>
int main( ){

    int N, A, Valor;
    scanf("%d", &N);
    for( A = 1; A <= N; ++A){
        scanf("%d", &Valor);
        if(Valor == 0){
            printf("NULL\n");
            
    }else if( Valor % 2 == 0){
        if(Valor > 0){
            printf("EVEN POSITIVE\n");
        }else{
            printf("EVEN NEGATIVE\n");
        }

    }else{
        if(Valor > 0){
        printf("ODD POSITIVE\n");
    }else{
        printf("ODD NEGATIVE\n");
    }
    }
    }
    return 0;
}
