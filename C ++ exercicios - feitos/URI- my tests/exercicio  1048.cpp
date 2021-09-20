#include<stdio.h>
main()
{
float s,salario;
int porcentagem ,r;
scanf("%f",&s);
if (s >= 0 && s <= 400.00 )
{
salario = s * 1.15;
porcentagem = 15;
r = s * 0.15;
}
else if(s > 400.00 && s <= 800.00 ){ 
salario = s * 1.12;
porcentagem = 12;
r = s * 0.12;
}
else if (s > 800.00 && s <= 1200.00){ 
salario = s * 1.10;
porcentagem = 10;
r = s * 0.10;
}
else if (s > 1200.00 && s <= 2000.00){
salario = s * 1.07;
porcentagem = 7;
r = s * 0.07; 
}
else if (s > 2000.00){
salario = s * 1.04;
porcentagem = 4;
r = s * 0.04;
}printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", Sala * 1.15, Sala * 0.15);

printf("Novo salario : %.2f\n",salario);
printf("ganho de reajuste : %d\n", r );
printf("Em porcentual : %d%%\n",porcentagem );
 return(0);
 }


