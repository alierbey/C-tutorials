#include <stdio.h>


/* Odev
   Klavyeden girilen bir sayının
   1. karesini donduren bir fonksiyon
   2. kupunu donduren bir fonksiyon
   3. asal sayı olup olmadıgini donduren fonksiyon
   yazılacak
   Çıktı:
   12 sayisinin karesi = 144
   12 sayisinin kupu = 1600
   12 sayisi asal sayi degildir 
*/



int topla(int a, int b){
    int toplam = a + b;
    return toplam;
}

int mutlakDeger(int a){
    if (a>0)
        return a;
    else
        return -a;
}

int main(){

    int sayi1 = 12;
    int sayi2 = -23;
    printf(" sayi1 mutlak deger = %d\n", mutlakDeger(sayi1));
    printf(" sayi2 mutlak deger = %d\n", mutlakDeger(sayi2));
    return 0;
}