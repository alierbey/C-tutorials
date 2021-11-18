#include <stdio.h>  // import "fmt"
int main()          // func main
{
       static int x;  
       if (x++ < 2)    // if (condition) {  }
       {
            main();
            printf(" Hey ");  // print
       }
     return 0;
}

