#include <stdio.h>
#define N 5

void bubbleSort(int A[5]){
    int i, j, tmp;

    for (i=0;i<N-1;i++){  
        for (j=0; j<N-1-i;j++){
            if (A[j]>A[j+1]){
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp; 
            }
        }
    }
    for (int a = 0 ; a<N; a++){
        printf("%d", A[a]);
    }
}
int main(){
    int a[N] = {3,0,2,5,-1};
    bubbleSort(a);
    return 0;
}

