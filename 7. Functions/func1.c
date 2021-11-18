#include <stdio.h>

/* Fonksiyonlar
 Kod tekrarı
 Modülerlik
 Programın okunması kolaylaşır
 Programa müdahale de kolaylaşır

<fonksiyonun_degisken_turu> <fonksiyonun_ismi> (<parametre1_turu> <parametre1_degeri>,<parametre2_turu> <parametre2_degeri>)
{
 kodlar
 return <fonksiyonun_donus_turunden_deger>
}

*/

void yeni_fonksiyon(){
    printf("topla fonksiyonu cagrildi\n");
}


int main(){
    printf("main fonksiyonu basladi\n");
    yeni_fonksiyon();
    printf("main fonksiyonuna geri dondu\n");
    return 0;
}