#include <stdio.h>
#include <stdlib.h>

/*
2) Implemente um sistema que controle a entrada e a saída de pedidos de produção
(código, descrição do produto a produzir, quantidade). Utilize uma estrutura para
representar os pedidos. Utilize um menu para que o usuário indique a entrada, saída
e consulta aos pedidos a produzir.

2 structs agr :D

*/

#define TAMANHO 5
struct Peca
{
    int codigo;
    int quantidade;
    char descricao[100];
};

struct fila
{
    int numeroelementos;
    int inicio;
    struct Peca elementos[TAMANHO];
};

typedef struct fila Fila;

Fila *criarFila(){
    Fila *f= (Fila*) malloc(sizeof(Fila));
    f->numeroelementos = 0;
    f->inicio = 0;
    return f;
}

void inserir(Fila *f)
{
    if(f->numeroelementos == TAMANHO){
        printf("Fila cheia.\n");
        return;
    }

    int fim = (f->inicio + f->numeroelementos) % TAMANHO;
            
            printf("Digite os dados do produto: \n\n");

            printf("Digite o codigo: ");
            scanf("%d", &f->elementos[fim].codigo);
            printf("Digite a descricao: ");
            scanf("%s", &f->elementos[fim].descricao);
            printf("Digite a quantidade: ");
            scanf("%d", &f->elementos[fim].quantidade);

    f->numeroelementos++;
}



void retirar(Fila *f)
{
    if(f->numeroelementos == 0){
        printf("fila vazia.\n");
        return;
    }
    //retira o elemento da fila
    //float codigo =f->codigo[f->inicio];
    f->inicio = (f->inicio + 1) % TAMANHO;
    f->numeroelementos--;

    //printf("Elemento retirado = %d \n",codigo);
}

void destruirFila(Fila *f){
    free(f);
}

void mostrarFila(Fila *f){

    printf("Conteudo da fila\n\n");

    int i;
    for(i = 0; i < f->numeroelementos; i++)
    {
        printf("Codigo: %d\n",f->elementos[(f->inicio + i) % TAMANHO].codigo);
        printf("Descricao: %s\n",f->elementos[(f->inicio + i) % TAMANHO].descricao);
        printf("Quantidade em estoque: %d\n\n",f->elementos[(f->inicio + i) % TAMANHO].quantidade);
    }
        printf("\n\n");
}

void main(){

    Fila *fila = criarFila();

    int opcao = -1;

    while(opcao != 0)
    {
    system("cls");
    printf("________________________________\n");
    printf("CONTROLE DE ENTRADA DE PEDIDOS\n");
    printf("\n");
    printf("Escolha a opcao desejada: \n");
    printf("1. coloca na fila\n");
    printf("2. Retira \n");
    printf("3. Mostra a fila\n");
    printf("0. Sair\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1 : //insere
            system("cls");
            inserir(fila);
             break;
        case 2 : //retira
            system("cls");
            retirar(fila);
            printf("elemento da fila retirado\n\n");
            break;
        case 3 : //mostra
            system("cls");
            mostrarFila(fila); break;
        case 0 :
            system("cls");
            printf("Ate a proxima! \n\n");
            break;    
        default:
            system("cls");
            printf("%d Nao e uma opcao valida!!!\n\n", opcao);
    }//switch

    printf("\n"); system("pause");
    }
    destruirFila(fila);
}
