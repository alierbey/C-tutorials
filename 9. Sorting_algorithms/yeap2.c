#include <stdio.h>
#define BOYUT 5

int main(){

    int A[BOYUT] = {5,2,3,4,1};
    int i, j, tmp;

    for(i=0;i<BOYUT-1;i++){
        for(j=0;j<BOYUT-1-i;j++){
            if (A[j]>A[j+1]){
                tmp = A[j+1];
                A[j+1] = A[j];
                A[j] = tmp;
            }
        }
    }
   for(i=0;i<BOYUT;i++){
       printf("%d,",A[i]);
   }
    return 0;
}

