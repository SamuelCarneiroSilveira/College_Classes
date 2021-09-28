#include <stdio.h>
#include <stdlib.h>


struct Peca
{
    int codigo;
    char descricao[100];
    char fornecedor[100];
    int valor;
    int quantidade;
};

int menu_principal()
{
    int opcao;
    printf("====================================\n");
    printf("\t1) Cadastrar peca no estoque\n");
    printf("\t2) Excluir peca do cadastro\n");
    printf("\t3) Inserir item de peca do estoque\n");
    printf("\t4) Retirar item de peca do estoque\n");
    printf("\t5) Pesquisar dados da peca\n");
    printf("\t6) Imprimir estoque\n");
    printf("Entre com a opcao desejada:\n");
    scanf("%d", &opcao);
    return opcao;
}

void cadastro(struct Peca * nova)
{
    printf("Insira o codigo da peca: ");
    scanf("%d", &(nova->codigo));
    printf("Insira a descricao: ");
    scanf("%s", &(nova->descricao));
    printf("Insira o fornecedor: ");
    scanf("%s", &(nova->fornecedor));
    printf("Insira o valor: ");
    scanf("%d", &(nova->valor));
    nova->quantidade = 0;
    return nova;
};

void imprimir_peca(struct Peca * p)
{
    printf("----------------------\n");
    printf("codigo: %d\n", p->codigo);
    printf("descricao: %s\n", p->descricao);
    printf("fornecedor: %s\n", p->fornecedor);
    printf("valor: %d\n", p->valor);
    printf("quantidade: %d\n", p->quantidade);
}

int perguntar_codigo()
{
    int codigo;
    printf("Insira o codigo da peca: ");
    scanf("%d", &codigo);
    return codigo;
}

void perguntar_descricao(char * descricao)
{
    printf("Insira a descricao: ");
    scanf("%s", descricao);
}

int main()
{
    int escolha;
    struct Peca estoque[100];
    int tipos_de_peca_no_estoque = 0;
    int codigo;
    char descricao[200];

    while (1)
    {
        escolha = menu_principal();
        if (escolha == 1)
        {
            cadastro(estoque + tipos_de_peca_no_estoque);
            tipos_de_peca_no_estoque++;
        }
        else if (escolha == 2)
        {
            //exclusao do cadastro
        }
        else if (escolha == 3)
        {
           codigo = perguntar_codigo();
           for (int i = 0; i < tipos_de_peca_no_estoque; i++)
           {
               if(estoque[i].codigo == codigo)
               {
                    estoque[i].quantidade = estoque[i].quantidade + 1;
                    break;
               }
           }
        }
        else if (escolha == 4)
        {
           codigo = perguntar_codigo();
           for (int i = 0; i < tipos_de_peca_no_estoque; i++)
           {
               if(estoque[i].codigo == codigo)
               {
                    estoque[i].quantidade = estoque[i].quantidade - 1;
                    break;
               }
           }        }
        else if (escolha == 5)
        {
            perguntar_descricao(descricao);
            for (int i = 0; i < tipos_de_peca_no_estoque; i++)
            {
                if (strcmp(descricao, estoque[i].descricao) == 0)
                {
                    imprimir_peca(estoque + i);
                    break;
                }
            }

        }
        else if (escolha == 6)
        {
            for (int i = 0; i < tipos_de_peca_no_estoque; i++)
            {
                imprimir_peca(estoque + i);
            }
        }
        else
            break;
    }

    return 0;
}
