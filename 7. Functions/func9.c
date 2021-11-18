#include <stdio.h>
#define BOYUT 5

void yazdir(int a[]){
    for (size_t i = 0; i < BOYUT; i++)
        printf("%d", a[i]);   
}

int main(){

    int dizi[BOYUT] = {1,2,3,4,5};
    yazdir(dizi);

    return 0;
}