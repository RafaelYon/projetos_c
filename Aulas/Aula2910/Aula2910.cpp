#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int read_int()
{
	int value;

	printf("Insira um numero inteiro: ");

	scanf_s("%d", &value);

	return value;
}


int main()
{
	int a, b;

	a = read_int();
	b = read_int();
	
	printf("Exibe valores entres os dois valores digitados utilizando o loop \"while\":\n");

	if (a > b)
	{
		int temp = a;

		// Troca os valores
		a = b;
		b = temp;
	}

	while (a < (b - 1))
	{	
		a++;

		printf("%d\n", a);
	}

	system("pause");

    return 0;
}

