#include <stdio.h>

int main(){
    int dizi[] = {5,1,8,2};
    int toplam = 0;
    for (int i = 0; i < 4; i++)
    {
        toplam += dizi[i]; 
    }    
    printf("Toplam = %d",toplam);
    return 0;
}
