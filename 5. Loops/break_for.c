#include <stdio.h>

int main(){
    for (int i =0 ; i < 5; i++) {
        printf("%d", i);
        if (i == 2)
                break;
    }
    return 0;
}