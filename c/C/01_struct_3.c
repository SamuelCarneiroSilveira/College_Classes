#include <stdio.h>
#include <stdlib.h>

#define QNT 3

struct tipoFerramenta{

    int codigo;
    char descricao[20];
    float valor;
    
}; 

int main(void){

    void exibeMenos50(struct tipoFerramenta a[]);

    struct tipoFerramenta ferramenta[QNT];

    for (int i = 0; i < QNT; i++){ //le os dados
        printf("Escreva o codigo da ferramenta %d: ", i+1);
        scanf("%d",&ferramenta[i].codigo);
        printf("Escreva a descricao da ferramenta %d: ", i+1);
        scanf("%s",ferramenta[i].descricao);
        printf("Escreva o valor da ferramenta %d: ", i+1);
        scanf("%f",&ferramenta[i].valor);
    };
    system("cls");
    printf("-------------------------------------------\n");
    printf("-----------Ferramentas < 50 ---------------\n");
    printf("-------------------------------------------\n\n");
    exibeMenos50(ferramenta);

return 0;
}

void exibeMenos50(struct tipoFerramenta a[]) {

    for (int i = 0; i < QNT; i++)
    {
        if (a[i].valor < 50)
        {
          printf("Codigo : %d \n", a[i].codigo);  
          printf("Descricao : %s \n",a[i].descricao);  
          printf("Valor : %.2f \n\n",a[i].valor);  
        };
        
    };
} 





