#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int numero, resposta;
int contador=0;

int main(int argc, char *argv[])
{
do
{	
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	printf("Tabuada\n\n");
	printf("Digite o número da tabuada: ");
	scanf("%d", &numero);
	for (contador=0;contador<=10;contador++)
	{
		printf("%d x %d = %d\n", numero, contador, numero*contador);
	}
	printf("\nOutras opções: ");
	printf("\n1- Novo cálculo\n");
	printf("\n2- Sair\n\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &resposta);
}while(resposta != 2);

	system("pause");	
	return(0);
}