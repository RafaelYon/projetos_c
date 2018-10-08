// Aula0810.cpp : Defines the entry point for the console application.

#include "stdafx.h" // Inclus�o de biblioteca

// C ANSI
#include <stdio.h>	// Biblioteca de entrada e sa�da padr�o
#include <stdlib.h>	// Biblioteca para dar comandos no CMD

// Variaveis (Escopo Global - vis�vel em todo o c�digo).
// Uma vari�vel s� exite ap�s sua cria��o.
int inteiro;
float ponto_flutuante;	// Preciss�o menor
double real;			// Preciss�o maior

// Bool -> Implementado nativamente no C - C99. Implementado pela biblioteca stdbool.h no C89/90. (https://stackoverflow.com/questions/1608318/is-bool-a-native-c-type)
bool logico;

int main()
{
	// Variavel (Escopo Local - vis�vel apenas nesta fun��o), com valor inicial
	int inteiro_local = 65321;

	// "\" = caractere de escape (n�o impresso)
	// "\n" = new line
	// "\t" = tabula��o

	// Opera��o de sa�da. Exibe "Hello World!" no console.
	printf("Hello World\n");

	// Atribuindo valores as variavel globais
	inteiro			= 10 + inteiro_local;
	ponto_flutuante = 11.3;

	// Imprimindo o valor das variaveis:
	
	// "%i" = c�digo para inteiros
	printf("Inteiro local: %i\n", inteiro_local);

	printf("Inteiro global: %i\n", inteiro);

	// "%f" = c�digo para floats e doubles.
	printf("Ponto flutuante global: %f\n", ponto_flutuante);

	printf("Podemos misturar textos com valores %i.\n", 33 + 77);

	printf("Exemplo soma:\n%i + %i = %i\n", 13, inteiro, 13 + inteiro);

	// Exibindo um valor inteiro sem passar o argumento num�rico para ser exibido
	printf("Valor numerico nao informado: %i\n");
	// Neste caso ele pega algum valor da memoria, em alguns compiladores pode ser reportado um erro. N�O USAR para pegar valores aleat�rios
	
	printf("Escreva um valor inteiro: ");

	// Opera��o de entrada:
	// Leitura com SCANF / SCANF_S

	// Usei scanf_s, por que scanf � inseguro
	// Passamos o endere�o de entrada para esta fun��o:
	scanf_s("%i", &inteiro_local);

	printf("O valor digitado: %i\n", inteiro_local);

	printf("Insira um valor decimal: ");

	scanf_s("%f", &ponto_flutuante);

	printf("Valor digitado: %f\n", ponto_flutuante);

	// Pausa o programa usando uma fun��o do sistema operacional WINDOWS, n�o dispon�vel em outras sistemas operacionais.
	system("pause");
	
	return 0;
}