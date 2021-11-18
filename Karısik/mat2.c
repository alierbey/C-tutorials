#include <stdio.h>
#define BOYUT 7

void yazdir(int sayi[]){
    
    for(int i = 0 ;  i<BOYUT; i++)
        printf("%d - ", sayi[i]);

}

int main(){

    int dizi[BOYUT]= {7,3,1,5,6,9,2};

    yazdir(dizi);

    return 0;
}





