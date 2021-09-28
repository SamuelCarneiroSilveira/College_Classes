#include <stdio.h>
#include <stdlib.h>


struct carro{
    int ano;
    float valor;
    char modelo[100];
};

void bubbleSort(struct carro * a, int N);

int main()
{
    int tamanho;
    int maximo;

    system("cls");
    printf("qual o numero maximo de carros que voce quer alocar?\n");
    scanf("%d", &maximo);
    system("cls");

    struct carro * elementos;
    elementos = malloc(maximo*sizeof(struct carro));

    if (elementos == NULL)
    {
        printf("Nao foi possivel alocar memoria\n");
        return -1;
    }

    tamanho = 0;
    int opcao = 0;

    while (opcao != -1)
    {
        system("cls");
        printf("----------------MENU--------------\n");
        printf(" Numero de carros alocados: %d\n", tamanho);
        printf(" 1)adicionar\n");
        printf(" 2)mostrar \n");
        printf("-1)sair\n");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
                tamanho++;
                printf("Insira o ano do modelo: ");
                scanf("%d", &elementos[tamanho].ano);
                printf("Insira o valor do modelo: ");
                scanf("%f", &elementos[tamanho].valor);
                printf("Insira o modelo: ");
                scanf("%s", elementos[tamanho].modelo);
            
            break;
        case 2:
                 bubbleSort(elementos, tamanho);

                 for (int i = 0; i < tamanho+1; i++){
                    if (elementos[i].ano > 0 && elementos[i].ano < 99999)
                    {
                    printf("ano de fabricacao: %d\n", elementos[i].ano);
                    printf("modelo: %s \n", elementos[i].modelo);
                    printf("valor: %.2f \n", elementos[i].valor);
                    printf("\n");
                    }
                }
                system("pause");
            break;
        case -1:
            printf("tchau!\n\n");
            break;
        
        default:
            printf("Escreva uma opcao válida!\n\n");
            break;
        }
    };
}

void bubbleSort(struct carro * a, int N){

    int ultimoIndice, indiceOrdenacao;
    for (ultimoIndice = N - 1; ultimoIndice > 0; ultimoIndice--)
    {
        for (indiceOrdenacao = 0; indiceOrdenacao + 1 <= ultimoIndice; indiceOrdenacao++)
        {
           if (a[indiceOrdenacao].ano > a[indiceOrdenacao + 1].ano)
           {
                struct carro temp = a[indiceOrdenacao];
                a[indiceOrdenacao] = a[indiceOrdenacao + 1];
                a[indiceOrdenacao + 1] = temp;
           }
        }
    }
}
