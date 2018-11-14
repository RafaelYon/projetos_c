#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

// Definindo um struct
struct Data
{
	int dia;
	int mes;
	int ano;
};

struct Funcionario
{
	char nome[100];
	char cpf[11];
	struct Data dataNascimento;
	float salario;
};

Data LerData();

Funcionario RegistrarFuncionario();

int main()
{	
	// Declarando uma array de struct.
	struct Funcionario funcionario[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		funcionario[i] = RegistrarFuncionario();
	}

	system("pause");
	
	return 0;
}

Data LerData()
{
	struct Data data;
	
	printf("Insira o dia: ");
	scanf_s("%i", &data.dia);

	printf("Insira o mes: ");
	scanf_s("%i", &data.mes);

	printf("Insira o ano: ");
	scanf_s("%i", &data.ano);

	return data;
}

Funcionario RegistrarFuncionario()
{
	struct Funcionario funcionario;

	printf("\n=============================\n");
	printf("Registrar novo funcionario:\n");

	printf("Insira o nome do funcionario: (maximo 100 caracteres)\n");

	// Para ler uma string utiliza-se o "fgets" o qual deve passar o vetor de caracters, o tamanho máximo para ler e o stream de leitura.
	// stdin = buffer do teclado.
	fgets(funcionario.nome, 100, stdin);

	// Limpa o buffer do teclado para que as funções de leitura não leiam o caractere Entre e esperem por uma nova leitura.
	fflush(stdin);

	printf("Insira o cpf do funcionario: (apenas numeros)\n");

	// sizeof retorna o tamanho ocupado na memoria pela variavel
	fgets(funcionario.cpf, sizeof(funcionario.cpf), stdin);

	fflush(stdin);

	printf("Insira a data de nascimento do funcionario:\n");
	funcionario.dataNascimento = LerData();

	printf("Insira o salario: (Numero real)\n");
	scanf_s("%f", &funcionario.salario);

	printf("\n=============================\n");

	return funcionario;
}