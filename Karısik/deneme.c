#include <stdio.h>
#define BOYUT 5



void dizifonksiyon(int A[]){
    for(int i = 0; i<BOYUT;i++){
        printf("%d", A[i]);
    }
}


int main(){

    int dizi[BOYUT] = {1,2,3,4,5};

    dizifonksiyon(dizi);


    return 0;
}