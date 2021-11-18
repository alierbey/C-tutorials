#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* start = NULL;
struct node* temp = NULL;


void sonaEkle(int veri){

   struct node *ekle = (struct node*)malloc(sizeof(struct node));
   ekle -> data = veri;
   ekle -> next = NULL;

   if (start == NULL){
       start = ekle;
   } else {
       temp = start ;
       while(temp -> next != NULL){
           temp = temp -> next;
       }
       temp -> next = ekle;
   }
}

void yazdir(){
    temp = start;

    while (temp->next != NULL) {
        printf("%d ==> ", temp->data);
        temp = temp -> next;
    }
    printf("%d", temp -> data);
}


int main(){
    int secim;
    while (1==1)
    {
        printf("\nBir sayi giriniz : ");
        scanf("%d",&secim);
        if (secim == -1){
            break;
        }
        sonaEkle(secim);
        yazdir();
    }
}


