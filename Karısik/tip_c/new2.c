#include <stdio.h>

// soru 4 : aşağıdaki dizi deki elemanların toplamını yazan programı yazınız. 

int main(){
   int dizi[7] = {12,45,23,56,67,2,89};
   int toplam = 0;
   for(int i = 0; i<7;i++){  
       toplam += dizi[i];
   }
   printf("Toplam = %d", toplam );

   return 0;
}