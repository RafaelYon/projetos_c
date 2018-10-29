#include "stdafx.h"
#include <stdlib.h>

int read_int()
{
	int value;

	printf("Insira um numero inteiro: ");

	scanf_s("%d", &value);

	return value;
}

void show_numbers_between_ints()
{
	int a, b;

	a = read_int();
	b = read_int();

	printf("Exibe valores entres os dois valores digitados utilizando o loop \"while\":\n");

	// Verifica se precissa trocar a ordem dos valores.
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
}

// Função que pede 5 valores e exibe se estão em ordem crescente
void ask_for_five_ints_show_asc_or_desc()
{
	bool asc = true;
	int currentValue, previousValue;

	for (int i = 0; i < 5; i++)
	{
		currentValue = read_int();

		// Não realiza a verificação na primeira execução.
		if (asc == true && i > 0 && currentValue < previousValue)
		{
			asc = false;
		}

		previousValue = currentValue;
	}

	if (asc)
	{
		printf("Os numeros estao em ordem crescente.\n");
	}
	else
	{
		printf("Os numeros nao estao em ordem crescente.\n");
	}
}


int main()
{
	//show_numbers_between_ints();

	ask_for_five_ints_show_asc_or_desc();

	system("pause");

    return 0;
}

