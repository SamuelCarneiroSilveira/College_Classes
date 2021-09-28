#include <stdio.h>
#include <stdlib.h>

struct pontos{

    int ax, ay;
    int bx, by;

};

float euclidiana(struct pontos p){
    return sqrt(pow(p.bx - p.ax ,2) + pow(p.by - p.ay,2));
}

int main(void){

    struct pontos dados;
    
    printf("Escreva o x de a: ");
    scanf("%d",&dados.ax);
    
    printf("Escreva o y de a: ");
    scanf("%d",&dados.ay);
    
    printf("Escreva o x de b: ");
    scanf("%d",&dados.bx);
    
    printf("Escreva o y de b: ");
    scanf("%d",&dados.by);

    printf("A distancia euclidiana e: %.2f", euclidiana(dados));


return 0;
}





