#include <stdio.h>
#include <stdlib.h>
//listas encadeadas 
//primeiro se declara uma struct pra servir de partes para a lista
struct ElementoLista
{
    int valor;
    struct ElementoLista *proximo;
};

//então se declara a primeira parte, o inicio da lista
struct ElementoLista *inicioLista = NULL;

//menu, onde se chama as funções
int main()
{
    void inserir();
    void listar();
    void excluir();
    void destruirLista();

    int opcao = 0;
    while(opcao != 5)
    {
        printf("** Menu de opções **\n\n");
        printf("[1] - Iserir novo valor\n");
        printf("[2] - Excluir valor\n");
        printf("[3] - Listar os valores\n");
        printf("[4] - Deletar a lista\n");
        printf("[5] - Sair\n\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        system("cls");

        // escolha no menu, chama funções
        switch(opcao)
        {
        case 1:
            inserir();
            system("cls");
            break;

        case 2:
            excluir();
            getch();
            system("cls");
            break;

        case 3:
            listar();
            getch();
            system("cls");
            break;

        case 4:
            destruirLista();
            getch();
            system("cls");
            break;

        case 5:
            break;

        default:
            printf("Opção inválida");
            getch();
            system("cls");
            break;
        }
    }
    return 0;
}

//função para inserir novo elemento 
void inserir()
{
    // criar o novo nó e armazenar dados ao mesmo
    struct ElementoLista *novoElemento = malloc(sizeof(struct ElementoLista));
    printf("Informe o valor:\n");
    scanf("%d", &(novoElemento->valor));
    novoElemento->proximo = NULL;
    // caso não exista elemento na lista, o inicio passa a apontar para este nó
    // senão deve-se atravessar a lista até encontrar o fim e anexar o nó ao fim
    if (inicioLista == NULL)
    {
        inicioLista = novoElemento;
    }
    else
    {
        struct ElementoLista *elementoCorrente = inicioLista;
        while (elementoCorrente->proximo != NULL)
        {
            elementoCorrente = elementoCorrente->proximo;
        }
        elementoCorrente->proximo = novoElemento;
    }
}

void listar()
{
    struct ElementoLista *elementoCorrente = inicioLista;
    while (elementoCorrente != NULL)
    {
        printf("Valor: %d\n", elementoCorrente->valor);
        elementoCorrente = elementoCorrente->proximo;
    }

}

void excluir()
{
    int numero;
    printf("Informe o valor que deseja excluir:\n");
    scanf("%d", &numero);

    struct ElementoLista *noCorrente, *noAnterior;

    // Se a lista estiver vazia não faz nada
    if (inicioLista==0){
        return;
    }
    // verifica se o elemento a excluir é o primeiro
    if (inicioLista->valor == numero)
    {
        noCorrente = inicioLista->proximo;
        free(inicioLista);
        inicioLista = noCorrente;
        printf("Elemento excluido.\n");
    }

    else
    {
        // inicializa o nó corrente para apontar ao inicio da lista
        noCorrente = inicioLista;

        // passa por todos os nós que não sejam o nó a excluir
        while (noCorrente != NULL && noCorrente->valor != numero)
        {
            noAnterior = noCorrente;
            noCorrente = noCorrente->proximo;
        }

        // liga o nó anterior ao próximo nó e então deleta o nó corrente
        if (noCorrente != NULL)
        {
            noAnterior->proximo = noCorrente->proximo;
            free(noCorrente);
            printf("Elemento excluido.\n");
        }
        else
        {
            printf("Elemento nao encontrado.\n");
        }
    }
}

void destruirLista()
{
    struct ElementoLista *noCorrente, *proximoNo;

    noCorrente = inicioLista;
    while (noCorrente != NULL)
    {
        proximoNo = noCorrente->proximo;
        free(noCorrente);
        noCorrente = proximoNo;
    }
    inicioLista = NULL;
    printf("Lista destruida.\b");
}


