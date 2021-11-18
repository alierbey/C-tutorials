#include <stdio.h>
#define BOYUT 10 // dizi boyutu


int main(void){

    int n[BOYUT];
    size_t i; // isaretsiz tamsayi

    for (i = 0 ; i < BOYUT; ++i){
        n[i] = 2 + 2 * i; 
    }

    printf("%s%13s\n","Eleman", "Deger");

    for (i = 0; i < BOYUT; ++i){
        printf("%7lu%13d\n",i,n[i]);
    }





}