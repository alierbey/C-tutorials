#include <stdio.h>

void topla(int sayi1, int sayi2){
  int toplam = sayi1 + sayi2;
  printf("%d", toplam);
}

int main(){

    int a = 12;
    int b = 23;
    topla(a,b);
    return 0;
}