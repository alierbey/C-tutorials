#include <stdio.h>

// &&  and 
// ||  or

/*
&& durumu
--------------
a    b   sonuc
0    0     0
0    1     0
1    0     0
1    1     1

|| durumu
--------------
a    b   sonuc
0    0     0
0    1     1
1    0     1
1    1     1

*/


int main(){
    
    int a = 10;
    int b = 15;

       //  1        1
    if (a > 5 ||  b > 10) 
        printf("yeap");



return 0;
}