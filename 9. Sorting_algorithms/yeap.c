#include <stdio.h>

int main(){

    int dizi[5] = {5,3,1,2,4};


    int i, j, tmp,c ;

    for (i=0;i<5;i++){
        int a = 0;
        printf("i %d \n", i);
        for(j=1;j<5-i;j++){
            if(dizi[a]>dizi[j]){
                tmp = dizi[a];
                dizi[a] = dizi[j];
                dizi[j] = tmp;
            }
            a++;
            
            for(c=0;c<5;c++){
                printf("%d-",dizi[c]);
            }
            printf("\n");
        }
    }


   for(i=0;i<5;i++){
       printf("%d\n",dizi[i]);
   }


    return 0;
}

