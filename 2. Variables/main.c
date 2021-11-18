#include <stdio.h>

int gsayi1;         // global değişken. İlk değer atanmadığında 0 değerini alır.
int gsayi2 = 24;    // global değişken.

main()
{
  int sayi1 = 12;          // local değişken.
  int sayi2;               // local değişken. İlk değeri atanmadığı için anlamsız bir değer alır.
  printf("%d\n", sayi1);
  printf("%d\n", sayi2);
  printf("%d\n", gsayi1);
  printf("%d\n", gsayi2);
}

