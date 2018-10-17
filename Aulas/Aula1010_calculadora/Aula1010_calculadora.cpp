#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

double ask_for_double_input()
{
	double input;

	printf("Insira um numero: ");

	scanf_s("%lf", &input);

	return input;
}

double sum(double a, double b)
{
	return a + b;
}

double subtract(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a * b;
}

double divide(double dividend, double divider)
{
	return dividend / divider;
}

void show_calcule_result(char operation, double a, double b, double result)
{
	printf("%lf %c %lf = %f\n", a, operation, b, result);
}

void realize_all_calcules()
{
	double a, b;

	a = ask_for_double_input();
	b = ask_for_double_input();

	printf("Resultados:\n");

	show_calcule_result('+', a, b, sum(a, b));

	show_calcule_result('-', a, b, subtract(a, b));

	show_calcule_result('*', a, b, multiply(a, b));

	show_calcule_result('/', a, b, divide(a, b));
}

int main()
{
	realize_all_calcules();

	system("pause");
}