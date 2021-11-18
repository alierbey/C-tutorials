#include <stdio.h>
// size_t icin derlerken sikinti cikartirsa 
// #include <stddef.h>


int main(void){

    int n[10];
    size_t i; // isaretsiz tamsayi

    for (i = 0 ; i < 10; ++i){
        n[i] = 0; 
    }

    printf("%s%13s\n","Eleman", "Deger");

    for (i = 0; i < 10; ++i){
        printf("%7lu%13d\n",i,n[i]);
    }
}