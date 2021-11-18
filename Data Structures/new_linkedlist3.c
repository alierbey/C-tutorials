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
   ekle ->data = veri;
   ekle ->next = NULL;

   if (start == NULL){
       start = ekle;
   } else {
       temp = start ;
       while(temp->next != NULL){
           temp = temp ->next;
       }
       temp ->next = ekle;
   }
}

void tersCevir(){

    struct node *gecici;
    struct node *prev = NULL;

    temp = start;


    while(temp != NULL){

        gecici = temp->next;
        temp->next = prev;
        prev = temp;
        temp = gecici;
    }
    start = prev;
}


void yazdir(){
    temp = start;

    while (temp->next != NULL) {
        printf("%d ==> ", temp->data);
        temp = temp ->next;
    }
    printf("%d", temp->data);
}


int main(){
    int secim;

    sonaEkle(15);
    sonaEkle(20);
    sonaEkle(25);
    sonaEkle(30);
    yazdir();
    tersCevir();
    printf("\n");
    yazdir();
    
}


