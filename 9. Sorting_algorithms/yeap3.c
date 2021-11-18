#include <stdio.h>
#define BOYUT 5

int main(){

    int A[BOYUT] = {5,4,3,2,1};
    int i, j, tmp, min;

    for(i=0;i<BOYUT-1;i++){
        min = A[i];
        for(j=i+1;j<BOYUT-1;j++){
            if (min>A[j]){
                min = A[j];
            }
        }
        A[i] = min;
    }
   for(i=0;i<BOYUT;i++){
       printf("%d,",A[i]);
   }
    return 0;
}

