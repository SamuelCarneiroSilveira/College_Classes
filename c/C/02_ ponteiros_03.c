#include <stdio.h>
#include <stdlib.h>


int main(void) {

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;
 
    (*depois).hora = 10;
    depois->minuto = 15;
    depois->segundo = 30;

    printf("%i:%i:%i", agora.hora , agora.minuto , agora.segundo);
    

    getchar();

    return 0;
}





