#include <stdio.h>

int main(){    
    int dizi[7] = {22,1,23,54,75,98,46};
    int max = dizi[0];
    int min = dizi[0];
    for (int i =1 ; i < 7; i++) {
        if (max < dizi[i] )
                max = dizi[i];       
        if (min > dizi[i])
                min = dizi[i];
    }
    int topla = max + min;
    printf("%d\n", dizi[0]);
    return 0;
}

