#include <stdio.h>


int topla(int a, int b){
    return a+b;
}

int carp(int a, int b){
    return a*b;
}

int main(){

    int sayi1,sayi2;

    printf("Iki sayi giriniz");
    printf("\nBirinci sayi :" );
    scanf("%d", &sayi1);
    printf("Ikinci sayi :");
    scanf("%d", &sayi2);

    printf("Iki sayinin toplami = %d\n", topla(sayi1, sayi2));
    printf("Iki sayinin carpimi = %d", carp(sayi2, sayi2));

    return 0;
}