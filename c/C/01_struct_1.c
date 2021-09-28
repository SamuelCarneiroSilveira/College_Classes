#include <stdio.h>
#include <stdlib.h>

/*escreva um programa que leia os dados de um retangulo e que exiba a area e 
o periumetro do mesmo. Utilize uma struct para representar o retangulo lido.*/

struct retangulo{
    int a, b;
};

int main(void){

    struct retangulo lado;
    
    printf("Escreva o lado A do retangulo: ");
    scanf("%d",&lado.a);
    printf("Escreva o lado B do retangulo: ");
    scanf("%d",&lado.b);

    int area = lado.a * lado.b;
    int perimetro = 2*(lado.a + lado.b);

    printf("A area do retangulo e: %d \n", area);
    printf("O perimetro do retangulo e: %d \n", perimetro);

return 0;
}





