#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* sondanBironceki = NULL;
struct node* a = NULL;
struct node* son = NULL;
struct node* c = NULL;

void yazdir(){
    temp = start;

    while (temp->next != NULL) {
        printf("%d ==> ", temp->data);
        temp = temp -> next;
    }
    printf("%d \n", temp -> data);
}

void change(){
    int dataNumber = 0 ;

    if (start == NULL){
        printf("veri yok\n");
    } else {
        temp = start;
        dataNumber++ ; 
        while (temp -> next != NULL)
        {
            temp = temp->next;
            dataNumber++ ; 
        }
        
    }

    if (dataNumber > 2 ){
        printf("degisim \n");


    if (start == NULL){
        printf("veri yok\n");
    } else {
        sondanBironceki = start;

        while (sondanBironceki -> next -> next != NULL){
            sondanBironceki = sondanBironceki -> next;
        }
        printf("sondan bir onceki = %d \n", sondanBironceki -> data);

        son = sondanBironceki -> next ;
        son -> next = start -> next;
        sondanBironceki -> next = start;
        start = son;
        sondanBironceki->next->next = NULL;


        //printf("a = %d\n",a ->data);
        
        printf("start = %d\n",start ->data);
        printf("degisimden sonra : ");
        yazdir();
        
        

    

    }
        

    }

    printf("dataNumber = %d\n", dataNumber);

}


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
   change();
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


