#include <stdio.h>
#define BOYUT 5

int dizi[BOYUT], top;

void push(int data){
    if (top+1 == BOYUT) {
        printf("Stack dolu");
    } else {
        top++;
        dizi[top] = data;
    }
}

void pop(){
    if (top == -1) {
        printf("Stack bos");
    } else {
        top--;
    }
}

void peek(){
    printf("En üstteki eleman => %d ", dizi[top]);
}


void yazdir(){
        for (int i = 0 ;i < top+1; i++){
            printf(" %d ", dizi[i]);
        }
}

int main(){
    int secim, data;
    top = -1;
    while (1==1)
    {
    printf("\n 1 - Push ");
    printf("\n 2 - Pop  ");
    printf("\n 3 - Peek  ");
    printf("\n Islemlerden birini seciniz : ");
    scanf("%d",&secim); 
    switch (secim)
        {
        case 1:
            printf("\n Bir secim yapiniz : ");
            scanf("%d", &data);
            push(data);
            yazdir(); break;
        case 2:
            pop();
            yazdir(); break;
        case 3:
            peek(); break;
        }
    }
    return 0;
}