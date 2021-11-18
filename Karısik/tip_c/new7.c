#include <stdio.h>
#define BOYUT 5

void yazdir(int A[]){
    for(int i=0;i<BOYUT;i++)
        printf("%d", A[i]);
}


int main(){

    int dizi[BOYUT] = {1,2,3,4,5};

    yazdir(dizi);

    return 0;
}