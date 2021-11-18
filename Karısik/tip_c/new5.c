#include <stdio.h>
#define BOYUT 10


int main(){

     int n[BOYUT];
     size_t i;

     for ( i = 0; i < BOYUT; i++){
         n[i] = 2 + 2 * i ;
     }

     for (i = 0; i < BOYUT; i++){
         printf("%d\n", n[i]);
     }
     
  return 0 ;
}
