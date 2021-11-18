#include <stdio.h>

int main()
{
   int i;
   scanf("%d", &i);

    if ( i < 20) {
        printf("küçük");
    } else if (i >= 20 && i<=65){
        printf("orta");
    } else {    
        printf("büyük");
    }

   return 0 ;
}
