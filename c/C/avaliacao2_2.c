#include <stdio.h>
#include <stdlib.h>

/*
1. Crie um programa que permita ao usuário registrar informações de vários
   veículos (modelo, ano de fabricação, valor). Quando o usuário decidir por não informar mais
   dados o programa deverá exibir na tela um relatório contendo os dados dos veículos
   ordenados por ano de fabricação.
   A pontuação será atribuída conforme os desafios parciais:

    1 Ponto – Definição da estrutura de dados Veiculo
    3 Pontos - Registro dos dados com alocação dinâmica de memória
    3 Pontos – Geração do relatório com os dados ordenados por ano de fabricação


    //qual valor maximo voce deseja registrar? *

    
*/



//listas encadeadas 
//primeiro se declara uma struc pra servir de partes para a lista
struct ElementoLista
{
    char modelo[100];
    int ano;
    float valor;

    struct ElementoLista *proximo;
};

//então se declara a primeira parte, o inicio da lista
struct ElementoLista *inicioLista = NULL;

//menu, onde se chama as funções
int main()
{
    void inserir();
    void listar(int numeroCarros);

    int numeroCarros = 0;
    int opcao = 0;
    while(opcao != 5)
    {
        printf("** Menu de opções **\n\n");
        printf("O numero de carros cadastrados é: %d", numeroCarros);
        printf("[1] - Iserir novo carro\n");
        printf("[2] - Listar os valores\n");
        printf("[3] - Sair\n\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);
        system("cls");

        // escolha no menu, chama funções
        switch(opcao)
        {
        case 1:
            inserir();
            system("cls");
            numeroCarros += 1;
            break;

        case 2:
            listar(numeroCarros);
            getch();
            system("cls");
            break;

        case 3:
            printf("Sair!");
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
    printf("Informe os dados do carro:\n\n");
    printf("informe o valor: ");
    scanf("%f", &(novoElemento->valor));
    printf("informe o ano de fabricação: ");
    scanf("%d", &(novoElemento->ano));
    printf("informe o modelo: ");
    scanf("%s", &(novoElemento->modelo));
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

void listar(int numeroCarros)
{
    struct ElementoLista *elementoCorrente = inicioLista;

    while (elementoCorrente != NULL)
    {
        printf("Valor: %.2f\n", elementoCorrente->valor);
        printf("Ano: %d\n", elementoCorrente->ano);
        printf("Modelo: %s\n", elementoCorrente->modelo);
        
        elementoCorrente = elementoCorrente->proximo;
    }
}


void bubbleSort(int* a, int N)
{
    int ultimoIndice, indiceOrdenacao;
    // contagem regressiva
    for (ultimoIndice = N - 1; ultimoIndice > 0; ultimoIndice--)
    {
        // borbulhando
        for (indiceOrdenacao = 0; indiceOrdenacao + 1 <= ultimoIndice; indiceOrdenacao++)
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
