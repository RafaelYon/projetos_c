#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

int read_int()
{
	int result;
	
	printf("Insira um numero inteiro: ");

	scanf_s("%d", &result);

	return result;
}

int get_largest_int(int a, int b, int c, int d)
{
	int largest = a;

	if (largest < b)
	{
		largest = b;
	}

	if (largest < c)
	{
		largest = c;
	}

	if (largest < d)
	{
		largest = d;
	}

	return largest;
}


int main()
{
	int a, b, c, d, result;
	
	printf("Descubra qual dos 4 inteiros e o maior:\n");

	a = read_int();
	b = read_int();
	c = read_int();
	d = read_int();

	result = get_largest_int(a, b, c, d);

	printf("O maior entre os 4 valores informados e: %d\n", result);
	
	system("pause");
	
	return 0;
}
