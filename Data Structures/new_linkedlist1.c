#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *birinci = NULL;
    birinci = (struct node*)malloc(sizeof(struct node));

    struct node *ikinci = (struct node*)malloc(sizeof(struct node));

    birinci -> data = 3;
    birinci -> next = ikinci;
    ikinci -> data = 6;
    ikinci -> next = NULL;
    printf("%d -> %d", birinci -> data, ikinci -> data);

    return 0;
}
