#include <stdio.h>

int a = 14;

void topla(){
    printf("%d\n", a);
}

int main(){

    printf("%d\n", a);
    a = 20;
    topla();
    return 0;
}