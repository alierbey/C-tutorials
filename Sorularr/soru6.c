#include <stdio.h>
int main()
{
    int sayi=12, s=7, i;
    for(i=1; i<sayi; i++) {
        if(sayi%i == 0)
            s += i;
    }
    printf("%d", s);
} 



