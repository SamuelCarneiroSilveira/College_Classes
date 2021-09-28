#include <stdio.h>
#include <stdlib.h>

/*ler nome, salario cargo de 50 pessoas
dados dos funç salarios entre 1000 e 2000 
soma dos salarios de todos os funç*/
#define count 4

struct arquivo{
    char nome[20];
    float salario;
    char cargo[20];
};

int main(void){

    void seleciona(struct arquivo n[count]);

    struct arquivo funcionarios[count];

    for (int i = 0; i < count; i++)
    {
        printf("Escreva o nome do funcionario %d: ", i+1);
        scanf("%s",funcionarios[i].nome);
        printf("Escreva o salario do funcionario %d: ", i+1);
        scanf("%f",&funcionarios[i].salario);
        printf("Escreva o cargo do funcionario %d: ", i+1);
        scanf("%s",funcionarios[i].cargo);
    };
    
    seleciona(funcionarios);

    return 0;
};


void seleciona(struct arquivo n[count]){

    system("cls");

    float soma = 0;

    printf("--------------------------------------------\n");
    printf("---Funcionario com salario entre 1k e 2k----\n");
    printf("--------------------------------------------\n\n");

    for (int i = 0; i < count; i++)
    {
        if (n[i].salario > 1000 && n[i].salario < 2000)
        {
            printf("%s\n",n[i].nome);            
            printf("%.2f\n",n[i].salario);            
            printf("%s\n\n",n[i].cargo);            
        };
        soma += n[i].salario;
    };
    
    printf("a soma dos salarios deu: %.2f",soma);
};




