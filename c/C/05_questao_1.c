#include <stdio.h>
#include <stdlib.h>
/*
1) Implemente um sistema que analise uma dada equação informada pelo usuário, e que
verifique a correta utilização de parênteses (balanceamento).

Exemplo:

    Entrada: (A+3)/(2*A) Resultado: correto
    Entrada: (A+3))/(2*A) Resultado: incorreto

Dica: empilhe cada ocorrência de um parênteses esquerdo; para cada ocorrência de
um delimitador direito, desempilhe e verifique se o carácter desempilhado é um
parênteses esquerdo

* criar um pilha 
* ler um texto
* identificar os caracteres ( )
* a cada ( acrescentar um elemento na fila
* a cada ) retirar um elemento da fila
* caso tente retirar, e ja não tenha nada, apresentar resultado incorreto
* caso tente adicionar e ja tenha um, apresentar resultado incorreto
* caso não tenha erros, resultado correto 
*/

/*
aula de aluno apra aluno


*/
#define tamanho 20

struct pilha{
    int numeroelementos;
    float elementos[tamanho]; 
};

typedef struct pilha Pilha;

Pilha *criarPilha(){
    Pilha *p =(Pilha*) malloc(sizeof(Pilha));
    p->numeroelementos = 0;
    return p;
}

int main(void){

    Pilha *pilha = criarPilha();

    char expressao[40];
    printf("digite a expressao\n");
    scanf("%s", expressao);
    system("cls");

    
    int i = 0;
    while (expressao[i] != '\0')
    {
        if (expressao[i] == '('){
            printf("abre parenteses\n");
            pilha->numeroelementos++;
        }
        if (expressao[i] == ')'){
            printf("fecha parenteses\n");
            pilha->numeroelementos--;
        }
        i++;
    }
    
    if (pilha->numeroelementos == 0)
    {
        printf("Resultado Correto!!!\n");
    } else {
        printf("Resultado Incorreto!!!\n");
    }
    
    system("pause");
    return 0;
}





