// Aula0810.cpp : Defines the entry point for the console application.

#include "stdafx.h" // Inclusão de biblioteca

// C ANSI
#include <stdio.h>	// Biblioteca de entrada e saída padrão
#include <stdlib.h>	// Biblioteca para dar comandos no CMD

// Variaveis (Escopo Global - visível em todo o código).
// Uma variável só exite após sua criação.
int inteiro;
float ponto_flutuante;	// Precissão menor
double real;			// Precissão maior

// Bool -> Implementado nativamente no C - C99. Implementado pela biblioteca stdbool.h no C89/90. (https://stackoverflow.com/questions/1608318/is-bool-a-native-c-type)
bool logico;

int main()
{
	// Variavel (Escopo Local - visível apenas nesta função), com valor inicial
	int inteiro_local = 65321;

	// "\" = caractere de escape (não impresso)
	// "\n" = new line
	// "\t" = tabulação

	// Operação de saída. Exibe "Hello World!" no console.
	printf("Hello World\n");

	// Atribuindo valores as variavel globais
	inteiro			= 10 + inteiro_local;
	ponto_flutuante = 11.3;

	// Imprimindo o valor das variaveis:
	
	// "%i" = código para inteiros
	printf("Inteiro local: %i\n", inteiro_local);

	printf("Inteiro global: %i\n", inteiro);

	// "%f" = código para floats e doubles.
	printf("Ponto flutuante global: %f\n", ponto_flutuante);

	printf("Podemos misturar textos com valores %i.\n", 33 + 77);

	printf("Exemplo soma:\n%i + %i = %i\n", 13, inteiro, 13 + inteiro);

	// Exibindo um valor inteiro sem passar o argumento numérico para ser exibido
	printf("Valor numerico nao informado: %i\n");
	// Neste caso ele pega algum valor da memoria, em alguns compiladores pode ser reportado um erro. NÃO USAR para pegar valores aleatórios
	
	printf("Escreva um valor inteiro: ");

	// Operação de entrada:
	// Leitura com SCANF / SCANF_S

	// Usei scanf_s, por que scanf é inseguro
	// Passamos o endereço de entrada para esta função:
	scanf_s("%i", &inteiro_local);

	printf("O valor digitado: %i\n", inteiro_local);

	printf("Insira um valor decimal: ");

	scanf_s("%f", &ponto_flutuante);

	printf("Valor digitado: %f\n", ponto_flutuante);

	// Pausa o programa usando uma função do sistema operacional WINDOWS, não disponível em outras sistemas operacionais.
	system("pause");
	
	return 0;
}