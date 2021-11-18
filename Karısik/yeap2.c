#include <stdio.h>

// pointer

int main(){


    int i = 12;

    int *a = &i;

    printf("%d\n", *a);


    *a = 45;

    printf("%d\n",i);

    i = 23;

    printf("%d\n",*a);

    printf("%p\n",a);
    printf("%p\n",&i);


    return 0;
}