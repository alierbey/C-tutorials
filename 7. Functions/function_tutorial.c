#include <stdio.h>


int mutlakDeger(int a){
   if (a>0)
        return a;
    else 
        return -a;
}

int karesi(int a){
    return a*a;
}

int kupu(int a){
    return a*a*a;
}

int asalSayi(int a){
    int i = 0;
    for (i = 2 ; i < a ; i++ ){
        if( a % i == 0)
            return 0;
    }
    return 1;
}

int main(){

    int sayi;
    printf("Bir say giriniz");
    scanf("%d", &sayi);

    printf("Sayinin Karesi %d\n", karesi(sayi));
    printf("Sayinin kupu %d\n", kupu(sayi));
    printf("Sayinin mutlak deger %d\n", mutlakDeger(sayi));

    int asalMi = asalSayi(sayi);

    if (asalMi == 1)
        printf("sayi asaldir");
    else
        printf("sayi asal degildir");    
    return 0;
}