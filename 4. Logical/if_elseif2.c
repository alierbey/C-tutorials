#include <stdio.h>

int main()
{
   int yas;
   scanf("%d", &yas);

    // 20 yaşından küçükse çocuk
    // 20 - 65 genç
    // 65 den büyükse yaşlı

    if ( yas < 20) {
            printf("cocuk");
    } else {
            if (yas >= 20 && yas<=65) {
                printf("genc");
            } else {
                if (yas > 65 )
                    printf("yasli");
            }
    }
   return 0 ;
}
