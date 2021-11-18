 #include <stdio.h>

int main(){
    int a = 1453, b = 0; 
    while(a>0){
        b++;
        a /= 10; 
    }
    printf("%d",b);
}