#include <stdio.h>
int main()
{
    int i, j, a=6;
    for(i=10;i>0;i-=2) {
        for(j=1;j<5;j++) {
            if(i%j==0) continue;
            else a+=j;
            }
        }
    printf("%d",a);
    return 0;
} 