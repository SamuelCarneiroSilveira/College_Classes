#include <stdio.h>
#include <stdlib.h>
/*
1)Implemente um programa que permita inserir, listar e remover
produtos em uma lista (codigo, descricao, valor).
*/


struct elementoProdutos{

    int codigo;
    char descricao[100];
    float valor;

    struct elementoProdutos *proximo;
};

struct elementoProdutos *inicioLista = NULL;

int main(void){

    void inserir(); //funções 
    void listar();
    void excluir();

    int opcao = 0;

    while (opcao != 4)
    {
        printf("-------MENU--------\n");
        printf("                   \n");
        printf("1) inserir\n"); //menu
        printf("2) listar\n");
        printf("3) remover\n");
        printf("4) sair\n\n");
        printf("selecione uma opcao: ");
        scanf("%d", &opcao);

        system("cls");
    
        switch (opcao)
        {
            case 1:
                inserir();
                getch();
                system("cls");
                break;

            case 2:
                printf("----Produtos Inseridos--------\n\n");
                listar();
                getch();
                system("cls");
                break; 

            case 3:
                excluir();
                getch();
                system("cls");
                break;

            case 4:
                printf("adeus y.y");
                getch();
                system("cls");
                break;

            default:
                printf("selecione uma opcao valida! \n");
                getch();
                system("cls");
                break;
        }
    }


    
return 0;
}

void inserir(){
    printf("funciona\n\n");

        struct elementoProdutos *novoElemento = malloc(sizeof(struct elementoProdutos));

        printf("informe o codigo do produto a ser acrescentado        :");
        scanf("%d", &novoElemento->codigo);
        printf("informe a descricao do produto a ser acrecentado      :");
        scanf("%s", novoElemento->descricao);
        printf("informe o valor do produto a ser acrecentado          :");
        scanf("%f", &novoElemento->valor);

        novoElemento->proximo = NULL;

        if (inicioLista == NULL)
        {
            inicioLista = novoElemento;
        } else {
            
            struct elementoProdutos *elementoCorrente = inicioLista;
            while (elementoCorrente->proximo != NULL)
            {
                elementoCorrente = elementoCorrente->proximo;
            }
            elementoCorrente->proximo = novoElemento;
        }
};

void listar()
{
    struct elementoProdutos *elementoCorrente = inicioLista;
    while (elementoCorrente != NULL)
    {
        printf("Codigo: %d\n", elementoCorrente->codigo);
        printf("Descricao %s\n", elementoCorrente ->descricao);
        printf("Valor: %.2f\n\n", elementoCorrente->valor);

        elementoCorrente = elementoCorrente->proximo;
    }
    
};

void excluir(){
    
        //se a lista estiver vazia, não faz nada
    if (inicioLista==0)
    {
        printf("lista vazia!!!\n");
        return;
    }

    int numero;
    printf("informe o codigo do produto que deseja excluir:\n");
    scanf("%d", &numero);

    struct elementoProdutos *noCorrente, *noAnterior;


    //verifica se o elemento a excluir é o primeiro
    if (inicioLista->codigo == numero)
    {
        noCorrente = inicioLista->proximo;
        free(inicioLista);
        inicioLista = noCorrente;
        printf("Elemento Excluido \n");
        printf("Era o primeiro\n");
    } 
    else 
    {
        //inicializa o nó corrente para apontar ao inicio da lista
        noCorrente = inicioLista;

        //passa por todos os nós que não sejam o nó a excluir
        while (noCorrente != NULL && noCorrente->codigo != numero)
        {
            noAnterior = noCorrente;
            noCorrente = noCorrente->proximo;
        }
        //liga o nó anterior ao proximo nó e então deleta o nó corrente
        if (noCorrente != NULL)
        {
            noAnterior->proximo = noCorrente->proximo;
            free(noCorrente);
            printf("Elemento excluido\n");
        }
        else
        {
            printf("Elemento nao encontrado\n");
        }
    }
}
