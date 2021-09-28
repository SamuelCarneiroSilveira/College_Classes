#include <stdio.h>
#include <stdlib.h>

/*     
      * size of retorna o tamanho em bytes
      * maloooc recebe o tamanho em bytes, e aloca um bloco de tamanho size  
      * função free, improtante nao esquecer
       
      2. Escreva um programa que leia um valor n e crie dinamicamente um vetor 
      de n elementos. Este vetor deve ser repassado para uma função, que deve
      ler os elementos. Finalmente, o vetor é repassado para uma segunda função
      que apresenta todos os valores.
      

*/

void leitura(int * vetor, int tamanho){
   for (int i = 0; i < tamanho; i++){
      printf("digite um numero: \n");
      scanf("%d", &vetor[i]);
   }
}


void escrita(int * vetor, int tamanho){
   printf("Vetor: ");
   for (int i = 0; i < tamanho; i++){
      printf("\n %d",vetor[i]);
   }
}

int main(){

   int * vetor = NULL;
   int tamanho;

   printf("informe o tamanho do vetor: \n");
   scanf("%d", &tamanho);

   vetor = malloc(tamanho*sizeof(int)); // int ou coisa apontada pelo vetor
   
   if ( vetor == NULL) {
      printf("Nao foi possivel alocar memoria");
      return -1;
   } else {
      leitura(vetor ,tamanho);
      escrita(vetor ,tamanho);
      free(vetor);
   }
   return 0;
}















