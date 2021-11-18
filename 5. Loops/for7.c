/* faktoriyel */
#include <stdio.h>

int main(){
    
    int faktoriyel=1;

    for (int i = 5; i >= 1; i--){
        faktoriyel *= i;
    }
    
    printf("%d\n",faktoriyel);
    return 0;
}