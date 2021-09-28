#include <stdio.h>
#include <stdlib.h>

int main(void){
    void F (int a, int *b);

    int m = 3, n = 5;
    
    F(m,&n);
    
    printf(" m = %d \n",m);  // 3
    printf(" n = %d \n",n);  // 7
    
return 0;
}

void F (int a, int *b){

       a =  7; 
      *b =  a;      
       b = &a;
      *b =  4;
       printf("  a = %d \n", a);  // 4
       printf(" *b = %d \n",*b);  // 4
}





