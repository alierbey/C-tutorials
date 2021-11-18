#include <stdio.h>


// soru 1 : aşağıdaki dizi de en küçük elemanı bulan programı yazınız.
// soru 2 : aşağıdaki dizi de en büyük elemanı bulan programı yazınız.
// soru 3 : aşağıdaki dizi de en küçük ve en büyük elemanın toplamını yazınız.
 

int main(){
   int dizi[7] = {12,45,23,56,67,2,89};
   int min = dizi[0];
   int max = dizi[0];
   for(int i = 1; i<7;i++){  
        if (min > dizi[i])
            min = dizi[i];
        if (max < dizi[i])
            max = dizi[i];
   }
   printf("min %d\n", min);
   printf("max %d\n", max);

   printf("en kucuk ve en buyuk toplam = %d", min+max );

   return 0;
}