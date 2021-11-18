#include <stdio.h>

void topla(int a, int b){
  int toplam = a + b;
  printf("%d", toplam);
}

int main(){

    int a = 12;
    int b = 23;
    int a = 45; // yanlış bir tanımlama (aynı fonksiyon içinde 
                // değişken bir defa tanımlanır)
    topla(a,b);
    return 0;
}