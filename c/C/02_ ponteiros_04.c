#include <stdio.h>
#include <stdlib.h>
//64_operacoes_matematicas

int main(void){

    struct horario
    {
        int hora,minuto,segundo;
    };
    
    struct horario agora, *depois;
    depois = &agora;

    depois->hora = 5;
    (*depois).minuto = 35;
    depois->segundo = 50;
    
    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + (*depois).hora;
    antes.minuto = somatorio + depois->minuto; 
    antes.segundo = somatorio + depois->segundo; 

    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    // getchar();

    return 0;
}












