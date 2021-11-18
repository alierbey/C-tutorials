#include <stdio.h>
#include <stdlib.h>

int main() {


    int A[5] = {2,7,1,8,9};
    int i = 0;
    int K = 0;

    while (A[i] != K) {
        i++;
    }

    if (i<5) {
        printf("%d",i);
    }  else {
        printf("no");
    }



    return 0;
}
