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

void switch_with_modulus()
{
	int number = read_int();

	switch (number % 5)
	{
	case 0:
		printf("Este numero e divisivel por 5.\n");
		break;
	case 1:
		printf("Este numero tem como resto 1 na divisao por 5.\n");
		break;
	case 2:
		printf("Este numero tem como resto 2 na divisao por 5.\n");
		break;
	case 3:
		printf("Este numero tem como resto 3 na divisao por 5.\n");
		break;
	case 4:
		printf("Este numero tem como resto 4 na divisao por 5, pois o resto sempre varia de 0 a divisor - 1.\n");
		break;
	}
}

int main()
{
	// Repete infinitamente
	while (true)
	{
		switch_with_modulus();
	}

	system("pause");

	return 0;
}