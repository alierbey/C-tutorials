#include <stdio.h>

int main()
{
   int secim;

   printf("\n1-Vücut Kitle Endeksi Hesapla");
   printf("\n2-Yaş Hesapla");
   printf("\n3-Doğum Tarihi Hesapla");
   printf("\nBir seçim yapınız\n");

   scanf("%d", &secim);

    switch (secim) {
        case 1: 
            printf("vücut kitle ");
            break;
        case 2:
            printf("yaş");
            break;
        case 3: 
            printf("dogum tarihi");
            break;
        default:
            printf("1,2,3 den birini seciniz");
            break;
    }
   
   return 0 ;
}
