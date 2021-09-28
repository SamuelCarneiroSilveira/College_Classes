#include <stdio.h>
#include <stdlib.h>

int main(void){

    void testeVariavel (int x);
    void testePonteiro (int *px);

    int teste = 1;
    int *pTeste = &teste;
    
    testePonteiro(pTeste);

    printf("%i \n",teste);

    getchar();
    return 0;
}

void testeVariavel (int x){
    ++x;
}
void testePonteiro (int *px){
    ++*px;
}




