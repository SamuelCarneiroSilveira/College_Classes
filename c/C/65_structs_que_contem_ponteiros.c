#include <stdio.h>
#include <stdlib.h>

int main(void){

    struct horario{
        int *pHoras;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;
    
    int hora = 200; 
    int minuto = 300; 
    int segundo = 400; 
    
    hoje.pHoras = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo; 

    printf("hora - %i \n",*hoje.pHoras);
    printf("minuto - %i \n",*hoje.pMinuto);
    printf("segundo - %i \n",*hoje.pSegundo);

    *hoje.pSegundo = 1000;

    return 0;
}





