#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	char faces[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
	char nipes[4][8] = {"Espadas", "Paus", "Ouros", "Copas"};
	printf("%c de %s\n", faces[rand()%13], nipes[rand()%4]);
	system("pause");
	return 0;
}