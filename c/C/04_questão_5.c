#include <stdio.h>
#include <stdlib.h>

/*
3. (Peso 5) Defina abaixo um programa que permita manipular círculos em 
   um plano (x, y, raio). O programa deve definir uma estrutura de dados
   denominada Circulo para representar um círculo. Além disso, o programa 
   deve disponibilizar ao usuário as opções de: 
   
   - Cadastrar 10 círculos em um vetor 
   - Apresentar o raio médio dos círculos cadastrados

*/
#define tamanho 10

struct circulo{

    int x, y;
    float raio;

};

typedef struct circulo Circulo;


void cadastrar(Circulo * dados){
    system("cls");
    printf("Cadastro\n\n");

    printf("Cadastrar x: ");
    scanf("%d", &dados->x);
    printf("Cadastrar y: ");
    scanf("%d", &dados->y);
    printf("Cadastrar raio: ");
    scanf("%f", &dados->raio);

    system("pause");system("cls");
}

void raioMedio(Circulo * dados, int x){

    float soma = 0;
    float media;
    
    int i = 0;
    while (i < x)
    {
        soma = soma + dados[i].raio;
        i++;
    }    
    system("cls");
    printf("\n o raio medio e %.2f\n\n", soma/x);

    system("pause");system("cls");

}

int main(void){

    Circulo dados[tamanho];

    int contador = 0;

    int menu = -1;
    while (menu != 0)
    {
        printf("-----------------Menu----------------\n");
        printf("Circulos cadastrados: %d\n", contador);
        printf("1) Adicionar Circulos \n");
        printf("2) Apresentar o raio medio \n");
        printf("0) Sair \n");
        scanf("%d", &menu);
        system("cls");

        switch (menu)
        {
        case 1:
            cadastrar(&dados[contador]);
            contador += 1;
            printf("circulos ja cadastrados: \n\n");
            for (int i = 0; i <contador; i++)
            {
               printf("%.2f\n",dados[i].raio);
               printf("%d\n",dados[i].x);
               printf("%d\n\n",dados[i].y);
            }
            system("pause");
            system("cls");
            break;
        case 2:
            raioMedio(&dados, contador);
            break;
        case 0:
            system("cls");
            printf("ate a proxima \n\n");
            system("pause");
            break;
        
        default:
            printf("Escolha uma opcao valida: \n");
            system("pause");system("cls");
            break;
        }
    }
    return 0;
}