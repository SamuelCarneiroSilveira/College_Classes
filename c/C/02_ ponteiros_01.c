#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x;
    x = 10;
    int *y = &x; // o & mostra o endereço de memoria da variável

    printf("%i\n",*y); // aponta para o endereço de memoria salvo em y
    printf("%i\n",y); // mostra o endereço de memoria usado


return 0;
}





