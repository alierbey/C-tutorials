#include <stdio.h>
#include <stdlib.h>

void quickSort(int *,int, int);

int main(){
    int *array,i,size;
    printf("Dizinin boyutunu giriniz: "); scanf("%d",&size);
    array=(int *)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("Dizinin %d. elemani :",i+1); scanf("%d",&array[i]);
    }
    printf("Dizinin baslangic durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    quickSort(array,0,size-1);
    printf("\n\nDizinin son durumu: ");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

void quickSort(int *array,int first,int last){
    int i; // İlk elemanı tutacak sayaç değişkeni
    int j; // Son elemanı tutacak sayaç değişkeni
    int pivot; // Pivot elemanı tutacak sayaç değişkeni
    int tmp; // Yer değiştirme işlemi için kullanılacak değişken
    pivot=first; // Pivot ilk eleman seçilir
   
    // Burada yapılan işlem son eleman ilk elemandan büyükse, son eleman ilk elemandan büyük olduğu sürece baştan ve sondan pivottan büyük olan ve
    // pivottan küçük olan bir eleman seçilip yer değiştirilir. 
    if(last>first){
        pivot=first;
        i=first;
        j=last;
        while (i<j){
            while (array[i]<=array[pivot] && i<last && j>i){ // Baştan pivottan büyük olan bir eleman bulunur
                i++;
            }
            while (array[j]>=array[pivot] && j>=first && j>=i){ // Sondan pivottan küçük olan bir eleman bulunur
                j--;
            }
            if (j>i){ // Swap işlemi yapılır
                tmp=array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
        // Yeniden pivot seçilir ve bölünen bağlı listenin diğer parçaları tekrar quick sort fonksiyonuna gönderilir
        tmp=array[j];
        array[j]=array[pivot];
        array[pivot]=tmp;
        quickSort(array,first,j-1);
        quickSort(array,j+1,last);
    }
}