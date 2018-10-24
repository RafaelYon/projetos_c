#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

int read_int()
{
	int value = 0;

	printf("Insira um numero inteiro: ");
	scanf_s("%i", &value);

	return value;
}

void show_even_values_in_int_range(int first, int last)
{
	while (first <= last)
	{
		// Verifica se é par
		if (first % 2 == 0)
		{
			printf("%i\t", first);
		}

		first++;
	}
}

int main()
{
	printf("Exibe os numeros pares em um determinado intervalo.\n");

	int first = read_int();
	int last  = read_int();

	show_even_values_in_int_range(first, last);

	printf("\n");

	system("pause");
	
	return 0;
}

