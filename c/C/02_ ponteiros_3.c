#include <stdio.h>
#include <stdlib.h>

// função menor maior que recebe um vetor de inteiros v com n elementos 
// e o endereço de duas variaveis inteiras min e max, e que armazene nessas
// variáveis o valor do elemento máximo do vetor

int main(void){

    void menorMaior (int *v, int n, int *min, int *max); 
    
    int min, max, vetor[10];
    int n = 10;

    printf("Digite o vetor: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    };
    
    menorMaior(&vetor, n, &min, &max);

    printf("O valor do min e: %d \n", min);
    printf("O valor do max e: %d \n", max);

    return 0;
}

void menorMaior (int *v, int n, int *min, int *max){

    int menor = v[0];
    int maior = v[0];
    
    for (int i = 0; i < n; i++){

        if (menor > v[i]){
           menor = v[i];
        };

        if (maior < v[i]){ 
            maior = v[i];
        };       
    };
    *min = menor;
    *max = maior;
} 



