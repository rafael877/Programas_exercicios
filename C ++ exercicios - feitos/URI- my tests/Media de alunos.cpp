#include <stdio.h>
int main()

{
float a, b, c, d, exame, media;
scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
media = (((a*2)+(b*3)+(c*4)+(d*1))/10);
printf("Media: %.1f\n", media);
	if (media >= 7.0)
	{
	printf("Aluno aprovado.\n");
	}
	else if (media >= 5.0)
	{
	printf("Aluno em exame.\n");
	scanf("%lf",&exame);
	printf("Nota do exame: %.1f\n",exame);
	if (exame + media / 2) {
	printf("Aluno aprovado.\n");
        }
        else{
		printf("Aluno reprovado.\n");
	        }
        printf("Media final: %.1f\n", (exame + media) / 2.0);
    }
    else{
    printf("Aluno reprovado.\n");
    }
	return 0;

}
