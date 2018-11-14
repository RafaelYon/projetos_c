#include "stdafx.h"
#include <stdlib.h>

float read_float();

void troca(float *, float *);
void maximo_minimo(int *, int, int *, int *);

int main()
{
	printf("Troca de valores:\n");

	float a = read_float();
	float b = read_float();

	// Passei o endereço da memoria da variavel "a" e "b".
	// Ex.: *a = &a;
	troca(&a, &b);

	printf("Valor de \"a\" = %f\nValor de \"b\" = %f\n", a, b);

	printf("\n====================================\n");
	printf("Passa um vetor para um funcao:\n\n");

	int vetor[7] = { 2, -3, 2, 1, 5, 7, 4 };

	int maximo, minimo;

	// Um vetor já é um ponteiro, por isso não passamos o endereço do ponteiro.
	maximo_minimo(vetor, 7, &maximo, &minimo);

	printf("Valor maximo do vetor: %i\nValor minimo: %i\n", maximo, minimo);

	system("pause");

    return 0;
}

float read_float()
{
	float value = 0;

	printf("Insira um numero real: ");
	scanf_s("%f", &value);

	return value;
}

// Troca os de dois float acessando a memória diretamente.
void troca(float *a, float *b)
{
	// Cria um variável para armazena temporariamente o valor que está armazena no endereço de memória apontado pelo ponteiro a; 
	float temp_a = *a;

	// Define o valor que está no endereço de memória apontado pelo ponteiro "a" para o valor que está no endereço apontado por "b".
	*a = *b;

	// Define o valor que está no endereço de memória apontado pelo ponteiro "b" para o valor armazenado em temp_a
	*b = temp_a;
}

// Verifica qual é o valor máximo e o mínimo existente em um vetor.
void maximo_minimo(int *v, int n, int *maximo, int *minimo)
{
	int i, value;

	// Define que ambos são iguais ao primeiro valor, para poder compará-los com segurança (sem ter o risco de pegar lixo de memoria).
	*maximo = v[0];
	*minimo = v[0];
	
	// Verifica todos os elementos
	for (i = 1; i < n; i++)
	{	
		if (v[i] < *minimo)
			*minimo = v[i];
		else if (v[i] > *maximo)
			*maximo = v[i];
	}
}