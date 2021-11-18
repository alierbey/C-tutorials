#include <stdio.h>


// soru = asagidaki diziyi kucukten buyuge siralayiniz 
// kullanilmasi gerekenler = define, size_t
// int dizi[9] = {7,2,9,21,3,1,95,6,4};

int main(){

    int dizi[2] = {7,2};
    size_t i;

    int tmp;
    tmp = dizi[0];  // tmp degiskeni 7
    dizi[0] = dizi[1]; // ilk elaman 2 oldu
    dizi[1] = tmp; // ikinci eleman 7

    for (i = 0 ; i<2 ; i++){
        printf("%d\n", dizi[i]);
    }

    
}