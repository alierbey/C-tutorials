#include <stdio.h>

int main()
{
   int rakam;
   printf("Bir rakam giriniz = ");
   scanf("%d", &rakam);

    switch (rakam) {
        case 1: 
            printf("Bir");
            break;
        case 2:
            printf("Iki");
            break;
        default:
            printf("1 veya 2 den biri degildir");
            break;
    }
   return 0 ;
}
