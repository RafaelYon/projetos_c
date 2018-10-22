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
	if (a > b && a > c && a > d)
	{
		return a;
	}
	else if (b > a && b > c && b > d)
	{
		return b;
	}
	else if (c > a && c > b && c > d)
	{
		return c;
	}
	else
	{
		return d;
	}
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
