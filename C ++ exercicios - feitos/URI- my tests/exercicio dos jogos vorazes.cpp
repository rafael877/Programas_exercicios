#include <stdlib.h>
#include <stdio.h>

main(){
float n1, n2, m;
int cont=0,aux=1;
printf("digite quantos alunos deseja calcular a(s) media(s) : ");
scanf("%d",&cont);

    while(aux<=cont){
        printf("\nescreva nota 1 do aluno(a) eh %d: ",aux);
        	scanf("%f", &n1);
        printf("escreva nota 2 do aluno(a) eh %d: ",aux);
        	scanf("%f", &n2);
        	m=(n1+n2)/2;
        printf("\n a(s) media(s) do(s) aluno(a)(s) eh : %2.0f", m);

        aux++;
    }
    printf("\n\n\no codigo chegou ao fim");
}


