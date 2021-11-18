/* faktoriyel */
#include <stdio.h>

int main(){

    int i = 5;
    int faktoriyel=1;
    
    while (i>=1){
        faktoriyel *= i;
        i--;
    }
    printf("%d\n",faktoriyel);
    return 0;
}
