#include <stdio.h>

 struct kisi{
     char isim[20];
     int yas;
 };

struct kisi k;

int main(){
    printf("İsim : ");
    scanf("%s", k.isim);
    printf("Yas : ");
    scanf("%d", &k.yas);
    printf("Isim : %s, Yasi : %d\n",  k.isim,k.yas);
    return 0;
}





