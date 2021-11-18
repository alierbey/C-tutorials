#include <stdio.h>

int main(){
    for (int i =0 ; i < 7; i++) {
        if (i == 2)
                break;
        printf("%d", i);
    }
    printf("yeap");
    return 0;
}