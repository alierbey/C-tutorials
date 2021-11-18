#include <stdio.h>


int main(){

    //artırma azaltma operatorleri

    int a = 1;

    a++;  // 2
    a = a+1; //  3

    int b = ++a;  
    int c = a;
    int d = a++;
    printf("a = %d, b = %d, c = %d, d = %d, a = %d ",a,b,c,d,a);
    
    return 0;
}