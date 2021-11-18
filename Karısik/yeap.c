#include <stdio.h>

int main(){

    int dizi[2] = {7,2};
    int i;

    int tmp;
                            //    dizi0   dizi1
    tmp = dizi[0];          //      7       2
    dizi[0] = dizi[1];      //      2       2
    dizi[1] = tmp;          //      2       7  

    for (i = 0 ; i < 2; i++){
        printf("%d\n", dizi[i]);
    }

    return 0;
}