#include <stdio.h>
#include <stdlib.h>
/*
2. Defina abaixo uma função que receba como parâmetro dois 
pontos no plano, e que devolva a distância euclidiana entre os mesmos. 
*/

struct circulo{

    int X, Y;
};

typedef struct circulo Circulo;


float euclidiana(Circulo a, Circulo b){

    return sqrt(pow(b.X - a.X ,2) + pow(b.Y - a.Y,2));
}

int main(void){

    Circulo dados[2];
    printf("= CALCULA DISTANCIA EUCLIDIANA =\n");
    printf("--------------------------------\n");
    printf("Escreva os dados dos pontos:\n\n");

    printf("Escreva o x de a: ");
    scanf("%d",&dados[1].X);
    
    printf("Escreva o y de a: ");
    scanf("%d",&dados[1].Y);
    
    printf("Escreva o x de b: ");
    scanf("%d",&dados[2].X);
    
    printf("Escreva o y de b: ");
    scanf("%d",&dados[2].Y);

    system("cls");


    printf("A distancia euclidiana e: %.2f\n\n\n", euclidiana(dados[1], dados[2]));
    system("pause");


    return 0;
}