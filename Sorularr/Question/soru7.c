//Soru =  Aşağıdaki programın çıktısı nedir ?
//Cevap = 0

#include <stdio.h>

int main(){

    int i = 15;
    for (int j = 3; j >= 0; j--) {
    i = i - i * j;
    }
    printf("%d", i);
    return 0;
}