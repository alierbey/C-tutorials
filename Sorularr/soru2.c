#include <stdio.h>
int main()
{
    int a=20, b=8, c=2;
    while(a != b) {
        c *= c;
        a -= 2;
        b += 2;
    }
    printf("%d", c);
} 

