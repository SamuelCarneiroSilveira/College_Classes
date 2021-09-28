#include <stdio.h>
#include <stdlib.h>

/*leia o nome e o total vendido por 50 func *
  calc comissão pra cada um, e salario bruto 
  e exibir esses dados

  dados: 
  sal base 1200
  comissão = 10% sobre total vendido
*/
#define base 1200
#define count 4

struct tabelaFunc{

    char nome[20];
    float totalVendido;

};

int main(void){

    void mostra(struct tabelaFunc a[count]);
    struct tabelaFunc funcionarios[count];

        for (int i = 0; i < count; i++)
        {
            printf("Escreva o nome do funcionario %d: ",i+1);
            scanf("%s",funcionarios[i].nome);
            printf("Escreva o total vendido pelo funcionario %d: ",i+1);
            scanf("%f",&funcionarios[i].totalVendido);
        }
    system("cls");
    mostra(funcionarios);
    system("pause"); // getchar();


return 0;
};

void mostra(struct tabelaFunc a[count]){

    printf("---------------------------------\n");
    printf("----Tabela de funcionarios-------\n");
    printf("---------------------------------\n\n");

    for (int i = 0; i < count; i++)
    {   
        float comissao = a[i].totalVendido * 0.1;
        float bruto = base + comissao;

        printf("nome: %s \n",a[i].nome);
        printf("total vendido: %.2f \n",a[i].totalVendido);
        printf("comissao: %.2f \n",comissao);
        printf("Sal bruto: %.2f \n\n",bruto);
    }
};




