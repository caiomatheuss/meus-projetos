#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	printf("Jogo do Dado\n");
	srand(time(NULL));
	printf("Face: %d\n", rand()%6 + 1);
	system("pause");
	
	return 0;
}