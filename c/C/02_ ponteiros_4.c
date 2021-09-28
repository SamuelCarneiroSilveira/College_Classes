#include <stdio.h>
#include <stdlib.h>

#define qnt 3

struct tabela{
    int codigo;
    char descricao[20];
    float valor;
};

int main(void){

    void maisCara(struct tabela *vetor, int *carinha);
    
    int cara = 0;
    struct tabela maquina[qnt];
    
    printf("Digite as infromacoes das maquinas: \n");

    for (int i = 0; i < qnt; i++){
        printf("Digite o codigo da maquina %d\n", i+1);
        scanf("%d", &maquina[i].codigo);
        printf("Digite a descricao da maquina %d\n", i+1);
        scanf("%s", maquina[i].descricao);
        printf("Digite o valor da maquina %d\n", i+1);
        scanf("%f", &maquina[i].valor);
        system("cls");
    }

    maisCara(maquina, &cara);

    printf("A maquina mais cara foi a de numero %d \n", cara + 1);
   
      printf("\ncodigo %d \n", maquina[cara].codigo);
      printf("descricao %s \n", maquina[cara].descricao);
      printf("valor %.2f \n", maquina[cara].valor);
     

    return 0;
}

void maisCara(struct tabela *vetor, int *carinha){

    float comparador = vetor[0].valor;
    int enderecoMaisCara;
    
    for (int F = 0; F < qnt; F++){

        if (comparador < vetor[F].valor){
            enderecoMaisCara = F;
            comparador = vetor[F].valor;
        };
    };
    *carinha = enderecoMaisCara; //o F da mais cara
}




// even, ghost gota // lose lane, tp and pot
//