#include <stdio.h>
int main()
{
    int i, j, a=5, b=8;
    for(i=4 ; i<10 ; i+=2) {
        for(j=6;j>=3;j--) {
            if(i>j) a++;
            else b--;
        }
    }
    printf("%d",a*b);
}