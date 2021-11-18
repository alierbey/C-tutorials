#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    n * next;
};

typedef n node;

int main() {
        node * root;
        root = (node *)malloc(sizeof(node));
        root -> x = 5;
        root -> next = (node *)malloc(sizeof(node));
        root -> next -> x = 10;
        node * iter;
        iter = root;
        printf("%d\n", iter -> x);
        iter = iter -> next;
        printf("%d\n", iter -> x);
}
