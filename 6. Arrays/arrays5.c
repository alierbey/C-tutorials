#include <stdio.h>

int main(){

    int dizi[7] = {34,5,6,54,75,98,46};

    int max = dizi[0];
    for (int i =1 ; i < 4; i++) {
        if (max > dizi[i] )
                max = dizi[i];       
    }
    printf("%d\n", max);

    return 0;
}
