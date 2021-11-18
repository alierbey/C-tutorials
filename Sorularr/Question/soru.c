#include <stdio.h>

int main(){
   int i,j = 1; 
    while(j++ < 4) {
    for (i = 0 ; i < j ; i++) 
        printf("*");
    }
    return 0;
}
