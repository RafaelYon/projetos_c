#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

// Função para ler um float.
float read_float()
{
	float value = 0;

	printf("Insira um numero real: ");
	scanf_s("%f", &value);

	return value;
}

// Função que exibe o valor da aliquota em porcentagem e o valor da dedução
void print_aliquota_deducao(float aliquota, float deducao)
{
	printf("A aliquota aplicada foi de %.2f%% \n", aliquota);
	printf("A deducao descontada foi de %.2f\n", deducao);
}

// Função que calcula o imposto de renda a ser pago de acordo com o salário passado.
// Esta função também exibe a aliquota e a dedução que foi utilizada para o calculo
float calcule_imposto_renda(float salary)
{
	float aliquota = 0, deducao = 0;

	if (salary <= 1903.98)
	{
		// Não paga imposto, retone sem realizar os calculos
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

	// Exibe a aliquota e a dedução
	print_aliquota_deducao(aliquota, deducao);

	return (salary * (aliquota / 100)) - deducao;
}

// Função que pede a inserção do salário e exibe o imposto a ser pago.
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