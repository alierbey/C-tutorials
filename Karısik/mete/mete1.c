#include <stdio.h>

int main(){

  int a[6] = {7,3,4,5,6,2}; 
  
  int toplam = 0;
  
  for (int i = 0 ; i<6;i++){
    toplam += a[i];
  }
  
  printf("%d", toplam);
  return 0;
}