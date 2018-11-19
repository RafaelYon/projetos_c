#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct fila
{
    int capacidade, primeiro, ultimo, numItens;
    int *itens;
    bool full;
} fila;

void CriarFila(fila*, int);
void InserirNaFila(fila*, int);
int RemoverDaFila(fila*);
bool FilaEstaVazia(fila*);
bool FilaEstaCheia(fila*);
void ExibirFila(fila*);

int main()
{
    fila f;
    int i, tempValue;

    CriarFila(&f, 4);

    for (i = 0; i < 8; i++)
    {
        printf("Inisira um numero inteiro: ");
        scanf("%i", &tempValue);

        InserirNaFila(&f, tempValue);

        // Exibe a cada loop apenas se ja inseros 4 valoes pela primeira vez
        if (i / 4 >= 0)
            ExibirFila(&f);
    }

    getchar();
    
    return 0;
}

void CriarFila(struct fila *f, int tamanho)
{
    f->capacidade = tamanho;
    f->primeiro = 0;
    f->ultimo = -1;
    f->numItens = 0;
    f->full = false;

    /*
        (int*) -> indicando que é do tipo ponteiro de inteiro.
        malloc -> função utilizada para alocação dinâmica.
     */
    f->itens = (int*) malloc(f->capacidade * sizeof(int));
}

void InserirNaFila(fila *f, int elemento)
{
    if (f->ultimo == f->capacidade - 1)
    {
        f->ultimo = -1;

        f->full = true;
    }
    
    if (!f->full)
    {
        f->numItens++;
    }

    f->ultimo++;

    f->itens[f->ultimo] = elemento;
}

int RemoverDaFila(fila *f)
{
    int result = f->itens[f->primeiro];

    if (f->primeiro == f->capacidade - 1)
        f->primeiro = 0;
    else
        f->primeiro++;

    f->numItens--;
    f->full = false;

    return result;
}

bool FilaEstaVaFilaEstaVazia(fila *f)
{
    return (f->numItens == 0);
}

bool FilaEstaCheia(fila *f)
{
    return (f->numItens == f->capacidade - 1);
}

void ExibirFila(fila *f)
{
    int i;

    printf("===============================\n");

    for (i = 0; i < f->numItens; i++)
    {
        printf("%i\t", f->itens[i]);
    }

    printf("\n===============================\n");
}