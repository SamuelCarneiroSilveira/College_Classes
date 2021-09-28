#include <stdio.h>
#include <stdlib.h>

/*
1)  Implementar um sistema que permita cadastrar 10 números. Em
    seguida, permita ao usuário apresentar estes números na ordem
    crescente e decrescente.
*/
#define TAMANHO 10

void bubbleSort(int* a, int N);

int main(void)
{
    int elementos[TAMANHO];

    printf("Digite os 10 elementos do Array");
    for (int i = 0; i < TAMANHO; i++)
    {
        //scanf("%d", &elementos[i]); ou
        scanf("%d", elementos + i);
    }
    



    
    printf("Array ogirinal: \n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", elementos[i]);
    }

    printf("\n");
    printf("Array Ordenado: \n");


    bubbleSort(elementos, TAMANHO);

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", elementos[i]);
    }

    return 0;
}



void bubbleSort(int* a, int N)
{
    int ultimoIndice, indiceOrdenacao;
    // contagem regressiva
    for (ultimoIndice = N - 1; ultimoIndice > 0; ultimoIndice--)
    {
        // borbulhando
        for (indiceOrdenacao=0; indiceOrdenacao + 1 <= ultimoIndice; indiceOrdenacao++)
        {
        // se estiver fora de ordem então inverta...
            if (a[indiceOrdenacao] > a[indiceOrdenacao + 1])
            {
                int temp = a[indiceOrdenacao];
                a[indiceOrdenacao] = a[indiceOrdenacao + 1];
                a[indiceOrdenacao + 1] = temp;
            }
        }
    }
}