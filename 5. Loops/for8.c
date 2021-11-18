/* 100’e kadar olan çift sayıların toplamını ekrana yazdıran kodu for döngüsü ile yazınız?  */

#include <stdio.h>

int main(){
    int toplam=0;
    for (int i = 1; i <= 100; i = i + 2){
        toplam += i;
    }
    printf("%d\n",toplam);
    return 0;
}