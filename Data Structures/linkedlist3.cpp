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
        root -> next -> next -> x = 15;
        node * iter;
        iter = root;
        int i  = 0;
        while (iter != NULL){
            i++;
            printf("%d . eleman = %d\n", i,iter -> x );
            iter = iter -> next;
        }
}
