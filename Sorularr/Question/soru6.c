//Soru =  Aşağıdaki programın çıktısı nedir ?
//Cevap = Hata verir j tanımlı değil

#include <stdio.h>

int main(){
    int k = 2;
    while (k < 5){
         printf("%d,%d", k, j);
    k += k % 2;
    }
return 0;
}