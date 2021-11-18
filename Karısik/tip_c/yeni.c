#include <stdio.h>

int main(){

    int gun = 5;

   if (gun == 1 ) {
       printf("Pazartesi");
   } else if ( gun == 2) {
       printf("Sali");
   }else if ( gun == 3) {
       printf("carsamba");
   }else if ( gun == 4) {
       printf("Persembe");
   }else if ( gun == 5) {
       printf("Cuma");
   }else if ( gun == 6) {
       printf("Cumartesi");
   }else if ( gun == 7) {
       printf("Pazar");
   }else  {
       printf("Gunlerden degil");
   }

    switch (gun) {
        case 1 :
            printf("Pazartesi"); break;
        case 2 : 
            printf("Sali"); break;
        case 3 :
            printf("Carsamba"); break;
        case 4 :
            printf("Persembe"); break;
        case 5 :
            printf ("Cuma");  break;
        case 6 : 
            printf("Cumartesi"); break;
        case 7 :
            printf("Pazar"); break;
        default :
            printf("Gunlerden biri degil"); break;
    }




    return 0;
} 