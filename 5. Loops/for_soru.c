#include <stdio.h>

// 80 baslangic
// 0 
// for
// 78-75-72........3-0-


int main()
{
    int i;
    for(i=80;i>=0;i--){
            if ( i % 3 == 0)
                printf("%d-", i);
    }
    
   
    
    return 0;
}

