#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

struct pilha{
    int numeroelementos;
    float elementos[TAMANHO];
};

typedef struct pilha Pilha;

Pilha *criarPilha(){
    Pilha *p=(Pilha*) malloc(sizeof(Pilha));
    p->numeroelementos = 0;
    return p;
}

void inserir(Pilha *p, float valor) {
 if(p->numeroelementos == TAMANHO){
 printf("Pilha cheia.\n");
 return;
 }
 p->elementos[p->numeroelementos] = valor;
 p->numeroelementos++;
}

void retirar(Pilha *p){
 if(p->numeroelementos == 0){
 printf("Pilha vazia.\n");
 return;
 }
 //retira o elemento da pilha
 float valor = p->elementos[p->numeroelementos - 1];
 p->numeroelementos--;
 printf("Elemento retirado = %.0f\n", valor);
}

void destruirPilha(Pilha *p){
 free(p);
}

void mostrarPilha(Pilha *p) {
 printf("Conteúdo da pilha\n");
 int i;
 for(i = p->numeroelementos - 1; i >= 0; i--){
 printf("%0.f\n",p->elementos[i]);
 }
 printf("\n");
}

main()
{
    Pilha *pilha = criarPilha();
    int opcao = -1;
    float item;
    while (opcao != 0)
    {
        system("cls");
        printf("Digite a opção desejada: \n");
        printf("1. Empilha (push)\n");
        printf("2. Retira (pop)\n");
        printf("3. Exibe a pilha\n");
        printf("0. Fim\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1 : //insere
                printf("Digite o valor: ");
                scanf("%f", &item);
                inserir(pilha,item);
                break;
            case 2 : //retira
                retirar(pilha);
                break;
            case 3 : //exibe
                mostrarPilha(pilha);
                break;
    }
    printf("\n");
    system("pause");
 }
 destruirPilha(pilha);
}