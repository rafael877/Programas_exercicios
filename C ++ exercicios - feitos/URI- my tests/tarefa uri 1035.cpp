#include <stdio.h>
int main()
{
 int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 
 
 if (b > c && d > a && c+d > a+b && c > c%2 >= 0 && d%2 >= 0)
 {
  printf("Valores aceitos\n");
 }
 else
 {
  printf("Valores nao aceitos\n");
 }
 return 0;
}
//, se B for maior que C e D for maior que A e
 //se a soma de C e D for maior que a soma de A e B e se C e D forem valores positivos
 //e se A for par, escreva a mensagem “Valores aceitos” 
 //(valores aceitos). Caso contrário, escreva a mensagem 
 //“Valores nao aceitos” (Valores não aceitos) 
 //((b> c && d> a) && (c + d> b + a) && (c> = 0 && d> = 0) && (a% 2 == 0))
 //c + d > a + b && c%2 == 0 && d%2 == 0
 //(b > c && d > a && c+d > a+b && c > c%2 >= 0 && d%2 >= 0)
 
 /*#include <stdio.h>
int main()
{
 int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 
 
 if ((b > c && d > a) && (c + d > b + a) && (c >= 0 && d >= 0) && (a% 2 == 0))
 {
  printf("Valores aceitos\n");
 }
 else
 {
  printf("Valores nao aceitos\n");
 }
 return 0;
}*/
