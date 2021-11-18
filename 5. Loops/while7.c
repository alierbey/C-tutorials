/* 80 ile 0 arasındaki 3 ü katlarını 80 den geriye olacak şekilde yazdırınız  */
#include <stdio.h>

int main(){
    int i = 80;
    while (i>=0){
          if ( i % 3 == 0)
           printf("%d-",i);
        i--;
    }
    return 0;
}