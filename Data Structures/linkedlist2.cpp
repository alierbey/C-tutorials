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
        root -> next -> next = (node *)malloc(sizeof(node));
        root -> next -> next -> x = 20;
        printf("%d\n", root -> x);
        printf("%d\n", root -> next -> x);
        printf("%d\n", root -> next -> next -> x);
}
