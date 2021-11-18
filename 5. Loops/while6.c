#include <stdio.h>

int main(){

    int i = 1,toplam=0;

    while (i<=100){
        toplam += i;
        i = i + 2;
    }
    printf("%d\n",toplam); 
    return 0;
}