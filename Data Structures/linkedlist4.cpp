#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    n * next;
};

typedef n node;


void yazdir(node * r) {
    while (r != NULL)
    {
        printf("%d\n", r -> x);
        r = r -> next;
    }
}

void ekle(node * r, int x) {
    while(r->next != NULL){
        r = r -> next ;
    }
    r -> next = (node * )malloc(sizeof(node));
    r -> next -> x = x;
    r -> next -> next = NULL ; 
}



int main() {
        node * root;
        root = (node *)malloc(sizeof(node));
        root -> x = 5;
        root -> next = NULL ;
        int i  = 0;
        for (i = 0; i < 5; i++)
        {
            ekle(root, i*10);
        }      
        yazdir(root);  
}
