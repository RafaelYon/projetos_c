#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

// Fun��o para ler um float.
float read_float()
{
	float value = 0;

	printf("Insira um numero real: ");
	scanf_s("%f", &value);

	return value;
}

// Fun��o que exibe o valor da aliquota em porcentagem e o valor da dedu��o
void print_aliquota_deducao(float aliquota, float deducao)
{
	printf("A aliquota aplicada foi de %.2f%% \n", aliquota);
	printf("A deducao descontada foi de %.2f\n", deducao);
}

// Fun��o que calcula o imposto de renda a ser pago de acordo com o sal�rio passado.
// Esta fun��o tamb�m exibe a aliquota e a dedu��o que foi utilizada para o calculo
float calcule_imposto_renda(float salary)
{
	float aliquota = 0, deducao = 0;

	if (salary <= 1903.98)
	{
		// N�o paga imposto, retone sem realizar os calculos
		print_aliquota_deducao(0, 0);

		return 0;
	}
	else if (salary <= 2826.65)
	{
		aliquota = 7.5;
		deducao = 142.8;
	}
	else if (salary <= 3751.05)
	{
		aliquota = 15;
		deducao = 354.8;
	}
	else if (salary <= 4664.68)
	{
		aliquota = 22.5;
		deducao = 636.13;
	}
	else
	{
		aliquota = 27.5;
		deducao = 869.36;
	}

	// Exibe a aliquota e a dedu��o
	print_aliquota_deducao(aliquota, deducao);

	return (salary * (aliquota / 100)) - deducao;
}

// Fun��o que pede a inser��o do sal�rio e exibe o imposto a ser pago.
void get_imposto_renda()
{
	printf("Informe seu salario para calcular o imposto de renda que voce deve pagar:\n");

	float tax = calcule_imposto_renda(read_float());

	printf("Voce deve pagar %.2f de imposto.\n", tax);
}

int main()
{
	get_imposto_renda();

	system("pause");

	return 0;
}