#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *px = &x;  // ''
    //px = &x;      //iguais

    double *py = &y;
    char *pz = &z;

    printf("Endereço x = %d | valor x = %d\n",px,*px);
    printf("Endereço y = %d | valor y = %.2f\n",py,*py);
    printf("Endereço z = %d | valor z = %c\n",pz,*pz);


return 0;
}





