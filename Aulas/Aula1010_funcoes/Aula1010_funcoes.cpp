#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

// void -> retorno "vazio" (não retorna nada)
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
	// Chama função sem retorno
	HelloWorld();

	// Exibe o resultado de uma função que recebe como parâmetros os resultados de outra função.
	printf("Soma: %i", Soma2Valores(LerInt(), LerInt()));

	system("pause");
	
	return 0;
}