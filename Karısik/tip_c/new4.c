#include <stdio.h>
// #include <stddef.h>
// size_t icin library
int main(){

    int n[10];
    size_t i; //isaretsiz tamsayi

    for (i= 0 ; i<10 ; i++){
            n[i] = 0;
    }


    printf("%s%13s\n" , "Eleman", "Deger");

    for (i = 0 ; i < 10 ; i++) {
        printf("%7lu%13d\n", i, n[i]);
    }

    return 0;
}