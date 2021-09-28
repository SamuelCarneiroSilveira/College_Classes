#include <stdio.h>
#include <stdlib.h>


/*  cadastre nome e tempo seg corredores
    identificar o mais rapido

    exibir para cada um, nome e diferença de tempo pro mais rapido


*/
#define count 3

struct nomeTempo {
    char nome[20];
    float tempo;
};

int main(void){

    void mostra(struct nomeTempo[count]);

    struct nomeTempo corredor[count];

    int maisRapido = 0;

    for (int i = 0; i < count; i++)
    {
        printf("Corredor %d: ",i+1);
        scanf("%s", corredor[i].nome);
        printf("Tempo de %s: ", corredor[i].nome);
        scanf("%f",&corredor[i].tempo);
    };

    system("cls");
    mostra(corredor);
    system("pause");
    return 0;
};

void mostra(struct nomeTempo a[count]){

    float maisRapido = 9999.9;
    int corredorRapido = 20;

    for (int i = 0; i < count; i++)
    {
        if (a[i].tempo < maisRapido)
        {
            maisRapido = a[i].tempo;
            corredorRapido = i;
        }
        
    };
    

    printf("O piloto mais rapido foi: %s \n",a[corredorRapido].nome); 
    printf("com um tempo de %.2f segundos\n\n",a[corredorRapido].tempo);

};


