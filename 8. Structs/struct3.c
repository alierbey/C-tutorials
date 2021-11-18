#include <stdio.h>

 struct {
     char isim[20];
     int yas;
 } k ;

    
int main(){

    printf("İsim : ");
    scanf("%s", k.isim);
    printf("Yas : ");
    scanf("%d", &k.yas);
    printf("Isim : %s, Yasi : %d\n",  k.isim,k.yas);
    return 0;
}


