#include <stdio.h>

// 0 ile 100 arasındaki sayıları toplayın 
// toplam += i
// toplam = toplam + i 


int main()
{

    /*
     toplam  i    toplam = toplam + i
       0     0       0       0     0
       0     1       1       0     1
       1     2       3       1     2
    */

    int toplam = 0;
    for(int i=0;i<3;i++){
            toplam += i ; 
    }

    printf("%d\n", toplam);
    return 0;
}
