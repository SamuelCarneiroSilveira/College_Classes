#include <stdio.h>
#include <stdlib.h>

/*
    4) Um posto de saúde deseja cadastrar os seguintes dados sobre as pessoas
    atendidas:
    nome
    idade
    peso
    altura
    
    Defina uma struct de dados para armazenar essas informações.

   Considere que o cadastro será armazenado em um vetor. O tamanho do vetor
   deve ser alocado dinamicamente.

*/
struct dados{
    char nome[100];
    int idade;
    float peso;
    float altura;
};


int main(){

    struct dados *notas;
    int n;

    printf("Escreva o numero de pacientes: ");
    scanf("%d", &n);

    notas = malloc(n * sizeof(struct dados));
    
    if (notas == NULL){
        printf("Erro ao alocar memoria");
        system("pause");
        exit(0);
    } else {
        for (int i = 0; i <n; i++){
            printf("Escreva os dados do paciente %d: \n\n",i+1);
            
            printf("nome:");
            scanf("%s", notas[i].nome);
           
            printf("idade:");
            scanf("%d", &notas[i].idade);
           
            printf("peso:");
            scanf("%f", &notas[i].peso);
           
            printf("altura:");
            scanf("%f", &notas[i].altura);
           
            system("cls");
        }
    
        for (int i = 0; i <n; i++){  // teste
            printf("\n %s", notas[i].nome);
            printf("\n %d", notas[i].idade);
            printf("\n %.2f", notas[i].peso);
            printf("\n %.2f \n", notas[i].altura);
        }
   
    }
    free(notas);
    return 0;
}





