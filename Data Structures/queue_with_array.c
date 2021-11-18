#include <stdio.h>
 
//Dizi boyutunu 5 olarak belirttim.
#define QUEUESIZE 5
 
//dizimiz 5 elemanlı olacak dizi[4] 0 1 2 3 4
int Queue[QUEUESIZE - 1];
//İlgili konuda size front ve rear elemanlarını tutmaktan bahsetmiştim, varsayılan değerleri -1 olacak.
int frontElement = -1, rearElement = -1;
 
//kuyruğa eleman ekleme fonksiyonu
void enQueue(int item)
{
    //Kuyruk eğer dolu ise hata çıktısı veriyoruz
    if(rearElement > 4)
    {
        printf("\n *********************************************\n");
        printf("\n Your Queue is Full, pls dequeue an element... ");
    }
    else
    {
        if(frontElement == -1)
        {
            //Eğer kuyrukta hiç eleman yoksa front indisini bir artırıyoruz ki dizinin 0. indisine eleman ekleyebilelim.
            frontElement = frontElement + 1;
        }
        //Eleman ekleyince en sondaki eleman 1 artar
        rearElement = rearElement + 1;
        //En arkadaki indise yeni elemanımızı yerleştiririz.
        Queue[rearElement] = item;
    }
}
 
//Kuyruktan eleman çıkaran fonksiyon
void deQueue()
{
    //İki kontrol yaptığımıza dikkat edin, en öndeki eleman, en arkadaki elemanın arkasında olamaz :)
    if(frontElement == -1 || frontElement > rearElement)
    {
        printf("\n *********************************************\n");
        printf("\n Your Queue is Already Empty, Please Enqueue an item");
    }
    else
    {
        //En öndeki elemanın indisini bir artırınca kuyruktan eleman çıkarmış oluyoruz. 
        //Ama unutmayın, bu bir probleme neden olacak, çözümü dairesel kuyruk'ta.
        frontElement = frontElement + 1;
    }
 
}
 
void printQueue()
{
    int i;
    if(frontElement == -1 || frontElement > rearElement)
    {
        printf("\n *********************************************\n");
        printf("\n Your Queue is Already Empty, Please Enqueue an item");
    }
    else
    {
        for( i = rearElement; i >= frontElement; i--)
        {
            printf(" %d \n", Queue[i]);
        }
    }
}
int main()
{
    int choise, item;
    while(1 == 1)
    {
        printf("\n 1- Enqueue element ...");
        printf("\n 2- Dequeue element ...");
        scanf("%d", &choise);
 
        switch(choise)
        {
            case 1:
                printf("\n Which number do you want to enqueue? ");
                scanf("%d", &item);
                enQueue(item);
                printQueue();
                break;
            case 2:
                deQueue();
                printQueue();
                break;
        }
 
    }
    return 0;
}