#include <stdio.h>

int main(){

    int dizi[] = {5,1,8,2};
    int dizininElemanSayisi = sizeof(dizi) / sizeof(int);
    printf("Eleman sayısı %d", dizininElemanSayisi);

    return 0;
}
