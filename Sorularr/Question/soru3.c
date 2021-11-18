 #include <stdio.h>

int main(){
    int a, b = 3, c = 5;
        for (a = 1; a < 10; a++) {
            if (a % 5 == 1) b *= 3;
            else if (a > 4 && b % 3==0) 
            a *= 3;
            else if (b % 4 == 0 || c % 2 == 0) 
            a += 2;
        }
    printf("%d",a + b + c);
}