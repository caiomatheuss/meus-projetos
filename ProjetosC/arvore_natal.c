#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
int i,j,star,tamanho;
	
int main(int argc, char *argv[])
	{
			setlocale(LC_ALL, "Portuguese");
			printf("Feliz Natal!!!\n");
			printf("Tamanho: ");
			scanf("%d", &tamanho);
			printf("\n");
			for (i=1; i<=tamanho; i++)
			{
				for (j=1; j<=tamanho-i; j++)
				{
					printf(" ");
				}
				for (star=1; star<=i*2-1; star++)
				{
					printf("*"); 
				}
				printf("\n");
			}
			
			printf("\n");
			system("pause");
		return 0;
	}