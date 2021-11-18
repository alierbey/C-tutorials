#include <stdio.h>
int main()
{
    int i, s=28, t=2;
    for(i=1;i<40;i++) {
        if(s%i==0) {
            i += 2;
            t *= 3;
        }
        else {
            t++;
            break;
        }
    }
    printf("%d",t);
} 

