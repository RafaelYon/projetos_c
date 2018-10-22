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

float get_avarage(float a, float b, float c, float d)
{
	return (a + b + c + d) / 4;
}

void print_int_largest_than_avarage(int largest, float avarage)
{
	printf("O valor %d e maior que a media de %f.\n", largest, avarage);
}


void show_largest_than_avarage(int a, int b, int c, int d)
{
	float avarage = get_avarage(a, b, c, d);

	if (a > avarage)
	{
		print_int_largest_than_avarage(a, avarage);
	}

	if (b > avarage)
	{
		print_int_largest_than_avarage(b, avarage);
	}

	if (c > avarage)
	{
		print_int_largest_than_avarage(c, avarage);
	}

	if (d > avarage)
	{
		print_int_largest_than_avarage(d, avarage);
	}
}


int main()
{
	int a, b, c, d, result;
	
	printf("Descubra qual dos 4 inteiros e o maior e os valores que s�o maiores que a media dos mesmos:\n");

	a = read_int();
	b = read_int();
	c = read_int();
	d = read_int();

	result = get_largest_int(a, b, c, d);

	printf("O maior entre os 4 valores informados e: %d\n", result);

	show_largest_than_avarage(a, b, c, d);
	
	system("pause");
	
	return 0;
}