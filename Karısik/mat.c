#include <stdio.h>
#define BOYUT 2

int main(){

    int dizi[BOYUT]= {7,3};
    size_t i;

    int tmp;                //   tmp    dizi[0]     dizi[1]
    tmp = dizi[0];          //    7       7           3  
    dizi[0] = dizi[1];      //    7       3           3
    dizi[1] = tmp;          //    7       3           7  

    for(i=0;i<BOYUT;i++){
        printf("%d-", dizi[i]);
    }

    return 0;
}

// 3 - 7 -
