#include <stdio.h>
#define BOYUT 5

int main(){
    int A[BOYUT] = {5,4,3,2,1};
    int i, j, min, tmp;

    for (i=0;i<BOYUT;i++){ 
        min = i ;  
        for (j= i+1; j<BOYUT;j++){
            if (A[min]>A[j]){
                min = j;
            }
        }
            tmp = A[min];
            A[min] = A[i];
            A[i] = tmp;
    }
    for (int a = 0 ; a<BOYUT; a++){
        printf("%d", A[a]);
    }
    return 0;
}

