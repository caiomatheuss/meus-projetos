#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
float nota1,nota2,media;
printf("Digite sua primeira nota: ");
scanf("%f, &nota1");
printf("Digite sua segunda nota: ");
scanf("%f, &nota2");
media = (nota1+nota2)/2;
printf("Sua media foi nota: %.1f\n", media);
if (media<7)
{
    prinft("\nREPROVADO\n");
}
else
{
    printf("\nAPROVADO\n");
}
system("pause");
return(0);

}