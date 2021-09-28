#include <stdio.h>
#include <stdlib.h>

/*
      * size of retorna o tamanho em bytes
      * maloooc recebe o tamanho em bytes, e aloca um bloco de tamanho size  
      * função free, improtante nao esquecer
       
      1. escreva um programa que solicite ao usuário a quantidade de alunos de 
      uma turma e que aloque dinamicamente um vetor para armazenar uma nota 
      para cada aluno(int). Depois de ler as notas o programa deve imprimir 
      as medias aritméticas.
*/



int main(void){

    void ler(int *notas, int nAlunos);
    
    int nAlunos;
    int *notas;

    printf("Quantos alunos tem nessa turma? \n");
    scanf("%d", &nAlunos);

    notas = malloc(nAlunos * sizeof(int));
    if (notas == NULL)
    {
        printf("Não foi possilve alocar memória");
        system("pause");
        exit(0);
    }else{
        ler(notas, nAlunos);
    }
    free(notas);
    return 0;
}


void ler(int *notas, int nAlunos){

    printf("Digite as notas dos %d alunos: \n",nAlunos);

    for (int i = 0; i < nAlunos ; i++)
    {
        scanf("%d", &notas[i]);
    };

    printf("\n As notas digitadas foram: ");

    for (int i = 0; i < nAlunos; i++){
        printf(" %d,", notas[i]);
    };

    printf("\n E a media aritmetica da turma foi: ");

    int somatorio = 0;
    for (int i = 0; i < nAlunos ; i++)
    {
        somatorio += notas[i];
    }
    somatorio = somatorio/nAlunos;
    printf("%d", somatorio);
}