// ATENÇÃO, ESTE PROGRAMINHA FOI DESENVOLVIDO NO UBUNTU POR ESTE MOTIVO ALGUMAS CHAMADAS DE FUNÇÕES
// DIFEREM DO QUE É UTILIZADO NO VISUAL STUDIO.
#include <stdio.h>
#include <stdlib.h>

void readMatrix(int**, int, int);
void showDiagnal(int **, int);

int main()
{
    int i;

    // Aloca memoria dinamica para uma matriz de 3 linhas
    // Ou seja, estou criando 3 ponteiros para outros ponteiros
    int** matrix = (int**) malloc(3 * sizeof(int *));

    // Aloca memoria para cada linha da matriz
    for (i = 0; i < 3; i++)
        matrix[i] = (int*) malloc(3 * sizeof(int));

    readMatrix(matrix, 3, 3);
    showDiagnal(matrix, 3);
    
    return 0;
}

void readMatrix(int** matrix, int rows, int cols)
{
    int i, j;
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Insira um número inteiro para a posição [%i;%i]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void showDiagnal(int** matrix, int size)
{
    printf("Os valores da diagonal principal são: \n");
    
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%i\t", matrix[i][i]);
    }
}