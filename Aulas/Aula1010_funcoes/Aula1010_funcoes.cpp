#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

// void -> retorno "vazio" (n�o retorna nada)
void HelloWorld()
{
	printf("Hello World!\n");
}

int Soma2Valores(int a, int b)
{
	return a + b;
}

int LerInt()
{
	int value;

	printf("Insira um numero inteiro: ");

	scanf_s("%i", &value);

	return value;
}

int main()
{
	// Chama fun��o sem retorno
	HelloWorld();

	// Exibe o resultado de uma fun��o que recebe como par�metros os resultados de outra fun��o.
	printf("Soma: %i", Soma2Valores(LerInt(), LerInt()));

	system("pause");
	
	return 0;
}