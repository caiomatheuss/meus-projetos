#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar(float num1, float num2){
	return num1 + num2;
}

float subtrair(float num1, float num2){
	return num1 - num2;
}

float dividir(float num1, float num2){
	return num1 / num2;
}

float multiplicar(float num1, float num2){
	return num1 * num2;
}

float porcentagem(float num1, float num2){
	return (num1 * num2 / 100);
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
int opcao;
float num1, num2, resultado;
printf("Calculadora\n");
printf("----------------------------\n");
printf("\nDigite o valor do primeiro número: ");
scanf("%f", &num1);
printf("\nDigite i valor do segundo número: ");
scaf("%f", &num2);
printf("----------------------------\n");
printf("1. Somar\n");
printf("2. Subtrair\n");
printf("3. Dividir\n");
printf("4. Multiplicar\n");
printf("5. Porcentagem\n");
printf("\n");
printf("Digite a opção desejada: ");
scanf("%d", &opcao);
switch(opcao) 
{
	case 1:
	 resultado  = somar(num1, num2);
	 break;
	 
	case 2:
	 resultado  = subtrair(num1, num2);
	 break;
	
	case 3:
		if (num2 == 0)
		{
			printf("Não é possivel dividir por 0\n");
		}
		else 
		{
			resultado = dividir(num1, num2);
		}
	 	break;
	
	case 4:
	 	resultado  = multiplicar(num1, num2);
	 	break;
	
	case 5:
	 	resultado  = porcentagem(num1, num2);
	 	break;
	 
	default:
		printf("Opção inválida\n");
		break;			
	}
	printf("----------------------------\n");
	printf("Resultado: %.2f\n", resultado);
	printf("\n");
	system("pause");	
	return(0);
}