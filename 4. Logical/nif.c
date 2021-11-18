#include <stdio.h>

int main()
{
   int a= 10;
   int b= 20;
   

    if ( a < 5 && b > 25  )
        printf("1. iki tarafta 0 oldugu için calismayacaktir\n");
    
    if ( a < 5 && b > 15  )
        printf("2. ilk tarafta 0 ikinci taraf 1 oldugu icin calismayacaktir\n");

    if ( a < 15 && b > 25  )
        printf("3. ilk tarafta 1 ikinci taraf 0 oldugu icin calismayacaktir\n");

    if ( a < 15 && b > 15  )
        printf("4. iki tarafta 1 oldugu icin calisacaktir\n");


   return 0 ;
}
