/* 80 ile 0 arasındaki 3 ü katlarını 80 den geriye olacak şekilde yazdırınız  */

#include <stdio.h>

int main(){
    for (int i = 80; i >= 0; i--){
        if ( i % 3 == 0)
           printf("%d-",i);
    }
    return 0;
}