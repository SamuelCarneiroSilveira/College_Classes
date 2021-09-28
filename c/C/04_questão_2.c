#include <stdio.h>
#include <stdlib.h>
/*
2)Altere o programa da questão 1 de modo que seja possível realizar o
controle de estoque de produtos (codigo, descricao, valor,
quantidade). O programa deve permitir:

- Inserir, excluir, listar produtos do estoque

- Alterar a quantidade de cada produto através de operações de
Entrada e Saída de materiais.

*/


struct elementoProdutos{

    int codigo;
    char descricao[100];
    float valor;
    int quantidade;

    struct elementoProdutos *proximo;
};

struct elementoProdutos *inicioLista = NULL;

int main(void){

    void inserir(); //funções 
    void listar();
    void excluir();
    
    void removeExistente();
    void adicionarExistente();

    int opcao = 0;

    while (opcao != 6)
    {
        printf("-------MENU--------\n");
        printf("                   \n");
        printf("1) inserir\n"); //menu
        printf("2) listar\n");
        printf("3) excluir\n");
        printf("4) entrada de materiais\n");
        printf("5) saida de materiais\n");
        printf("6) sair\n\n");
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
                adicionarExistente();
                getch();
                system("cls");
                break;

            case 5:
                removeExistente();
                getch();
                system("cls");
                break;

            case 6:
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
    
        struct elementoProdutos *novoElemento = malloc(sizeof(struct elementoProdutos));

        printf("informe o codigo do produto a ser acrescentado        :");
        scanf("%d", &novoElemento->codigo);
        printf("informe a descricao do produto a ser acrecentado      :");
        scanf("%s", novoElemento->descricao);
        printf("informe o valor do produto a ser acrecentado          :");
        scanf("%f", &novoElemento->valor);
        printf("informe a quantidade do produto a ser acrecentado     :");
        scanf("%d", &novoElemento->quantidade);

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
        printf("Valor: %.2f\n", elementoCorrente->valor);
        printf("Quantidade: %d\n\n", elementoCorrente->quantidade);

        elementoCorrente = elementoCorrente->proximo;
    }
    system("cls");
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
};

void adicionarExistente()
{

    int numero;
    printf("informe o codigo do produto que deseja adicionar:\n");
    scanf("%d", &numero);

    int x;
    
    if (inicioLista->codigo == numero)
    {
        printf("o produto possui %d elementos\n", inicioLista->quantidade);
        printf("informe a quantidade do produto que deseja adicionar:\n");
        scanf("%d", &x);
        inicioLista->quantidade += x;
        system("cls");
        printf("\nElemento agora possui %d unidades\n", inicioLista->quantidade);

    } else {
        
        struct elementoProdutos *noCorrente, *noAnterior;
        
        noCorrente = inicioLista;
    
        while (noCorrente != NULL && noCorrente->codigo != numero)
        {
            noAnterior = noCorrente;
            noCorrente = noCorrente->proximo;
        }

        if (noCorrente != NULL)
        {
            printf("o produto possui %d elementos\n", noCorrente->quantidade);
            printf("informe a quantidade do produto que deseja adicionar:\n");
            scanf("%d", &x);
            noCorrente->quantidade += x;
            system("cls");
            printf("\nElemento agora possui %d unidades\n", noCorrente->quantidade);
            
        }
        else
        {
            printf("Elemento nao encontrado\n");
        }    
    }
};

void removeExistente()
{

    int numero;
    printf("informe o codigo do produto que deseja remover:\n");
    scanf("%d", &numero);

    int x;
    
    if (inicioLista->codigo == numero)
    {
        printf("o produto possui %d elementos\n", inicioLista->quantidade);
        printf("informe a quantidade do produto que deseja remover:\n");
        scanf("%d", &x);
        inicioLista->quantidade -= x;
        system("cls");
        printf("\nElemento agora possui %d unidades\n", inicioLista->quantidade);

    } else {
        
        struct elementoProdutos *noCorrente, *noAnterior;
        
        noCorrente = inicioLista;
    
        while (noCorrente != NULL && noCorrente->codigo != numero)
        {
            noAnterior = noCorrente;
            noCorrente = noCorrente->proximo;
        }

        if (noCorrente != NULL)
        {
            printf("o produto possui %d elementos\n", noCorrente->quantidade);
            printf("informe a quantidade do produto que deseja remover:\n");
            scanf("%d", &x);
            noCorrente->quantidade -= x;
            system("cls");
            printf("\nElemento agora possui %d unidades\n", noCorrente->quantidade);
            
        }
        else
        {
            printf("Elemento nao encontrado\n");
        }    
    }
};
/*



    float valor;
    int quantidade;

    void remover();
    void entrada();

        printf("4) entrada\n");
        printf("5) remover\n");
        printf("6) sair\n\n");

            case 4:            
                entrada();
                getch();
                system("cls");
                break;

            case 5:
                remover();
                getch();
                system("cls");
                break;

            case 6:
                printf("adeus y.y");
                getch();
                system("cls");
                break;



*/