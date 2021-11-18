#include <stdio.h>

// if
// switch 

// a degiskeni var
// 1,2,3 e esitlik durumlarına 
// bir, iki , uc
// bir iki ve uce esit degil

int main(){
    
    int a = 2;

  /*  
    if ( a == 1){
        printf("bir");
    } else if (a == 2) {
        printf("iki");
    } else if (a == 3) {
        printf("uc");
    } else {
        printf("hicbiri");
    }
  */

    switch (a) {
        case 1 :
            printf("bir");break;
        case 2 :
            printf("iki");break;
        case 3 :
            printf("uc");break;
        default :
            printf("hicbiri");break;
    }


    
    return 0;
}