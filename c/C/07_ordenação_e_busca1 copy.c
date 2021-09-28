#include <stdio.h>
#include <stdlib.h>

/*
2)  Implementar um sistema que permita manter um número de peças
    (código, descrição, valor) em memória. Utilizar uma struct para
    representar a peça. Permita ao usuário apresentar relatórios
    ordenados por código e por valor.*/

//void valor(int* a, int N);

struct Peca
{
    int codigo;
    char descricao[100];
    float valor;
};

void codigo(struct Peca * a, int N);
void valor(struct Peca * a, int N);
void alimentar(struct Peca* a, int N);
void mostrar(struct Peca* a, int N);

int main(void){

    int numero;
    int n;

    printf("Quantos itens deseja armazenar? \n");
    scanf("%d", &numero);
    system("cls");

    struct Peca todos[numero];
   
    alimentar(todos, numero);
    
    while (n != -1)
    {
       system("cls"); 
       printf("--------Main menu-------\n\n");
       printf(" 1)listar produtos\n"); 
       printf(" 2)listar produtos em ordem por codigo\n"); 
       printf(" 3)listar produtos em ordem por valor\n"); 
       printf("-1)Sair\n"); 
       printf("\n"); 
       scanf("%d", &n);  
       system("cls");
        
        switch (n)
        {
        case 1:
            mostrar(todos, numero); 
            system("pause");
            break;
        case 2:
            //ordenar por codigo
            codigo(todos, numero); 
            system("cls");
            mostrar(todos, numero); 
            system("pause");
            break;
        case 3:
            //ordenar por valor
            valor(todos, numero); 
            system("cls");
            mostrar(todos, numero); 
            system("pause");
            break;
        case -1:
            printf("ate a proxima!\n");
            system("pause");
            break;
        default:
            printf("Escolha uma opcao valida\n");
            system("pause");
            break;
        }
    };
}


void alimentar(struct Peca *a, int N){
    for (int i = 0; i < N; i++)
    {
        printf("Escreva o Codigo: ");
        scanf("%d", &a[i].codigo);
        printf("Escreva a descricao: ");
        scanf("%s", a[i].descricao);
        printf("Escreva o valor: ");
        scanf("%f", &a[i].valor);
        printf("\n");
    }
}

void mostrar(struct Peca *a, int N){
    system("cls");
            
    for (int i = 0; i < N; i++)
    {
        printf("Codigo: %d\n", a[i].codigo);
        printf("descricao: %s\n", a[i].descricao);
        printf("valor: %.2f\n", a[i].valor);
        printf("\n");
    }
}

void codigo(struct Peca * a, int N)
{
    int ultimoIndice, indiceOrdenacao;
    // contagem regressiva
    for (ultimoIndice = N - 1; ultimoIndice > 0; ultimoIndice--)
    {
        // borbulhando
        for (indiceOrdenacao=0; indiceOrdenacao + 1 <= ultimoIndice; indiceOrdenacao++)
        {
        // se estiver fora de ordem então inverta...
            if (a[indiceOrdenacao].codigo > a[indiceOrdenacao + 1].codigo)
            {
                int temp = a[indiceOrdenacao].codigo;
                a[indiceOrdenacao].codigo = a[indiceOrdenacao + 1].codigo;
                a[indiceOrdenacao + 1].codigo = temp;
            }
        }
    }
}

void valor(struct Peca * a, int N)
{
    int ultimoIndice, indiceOrdenacao;
    // contagem regressiva
    for (ultimoIndice = N - 1; ultimoIndice > 0; ultimoIndice--)
    {
        // borbulhando
        for (indiceOrdenacao=0; indiceOrdenacao + 1 <= ultimoIndice; indiceOrdenacao++)
        {
        // se estiver fora de ordem então inverta...
            if (a[indiceOrdenacao].valor > a[indiceOrdenacao + 1].valor)
            {
                float temp = a[indiceOrdenacao].valor;
                a[indiceOrdenacao].valor = a[indiceOrdenacao + 1].valor;
                a[indiceOrdenacao + 1].valor = temp;
            }
        }
    }
}
