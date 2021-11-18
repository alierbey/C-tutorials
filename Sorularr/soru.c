#include <stdio.h>
int main() {
    int a=4, b=6, c, d;
    if(b>a && b%a == 0)
    c = a+b;
    else {
        if(a > b || a != 0) c = a*b;
        else c = a-b;
    }
    printf("%d",c);
}