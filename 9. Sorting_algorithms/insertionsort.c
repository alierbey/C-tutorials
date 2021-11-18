#include <stdio.h>
#define BOYUT 5

int main(){

    int dizi[BOYUT] = {9,1,3,6,5};
  
    int i, k , ekle;
    
    for (i=1;i<BOYUT;i++){
        ekle = dizi[i];  
        for (k = i-1 ; k>=0 && ekle <= dizi[k] ; k--){
            dizi[k+1] = dizi[k];
        }
        dizi[k+1] = ekle;
    }

    for (int a = 0 ; a<BOYUT; a++){
        printf("%d", dizi[a]);
    }

    return 0;
}

