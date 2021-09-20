#include <stdio.h>
int main() {
int i,f,t;
scanf("%i %i",&i,&f);
if(i>f){ t = (24-i)+f;}
if(i<f){ t = f-i;}
if(i==f){ t = 24;}
printf("O JOGO DUROU %i HORA(S)\n",t);
return 0;
}
