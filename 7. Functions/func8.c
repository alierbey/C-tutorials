#include <stdio.h>


int mutlak_deger(int n){
    if (n>=0)
        return n;
    else 
        return -n;
}


int main(){

    int sayi1 = 34;
    int sayi2 = -45;

    printf("Sayi1 in mutlak degeri : %d\n", mutlak_deger(sayi1));
    printf("Sayi2 nin mutlak degeri : %d", mutlak_deger(sayi2));

    return 0;
}