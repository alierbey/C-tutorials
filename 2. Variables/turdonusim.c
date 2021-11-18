#include <stdio.h>

int main(){

	/* Tur Donusumleri
		4.3/2 --> float / int ---> 2'yi float'a (2.0) otomatik cevirir --> float cinsinden islem yapar
	
		char
		short --> int --> float --> double --> long double
		
		Ör : double ve int deger varsa int'i double' a cevirir.
		
		Manuel Donusum
		----------------
		
		4.3 float degerini int'e cevirmek icin (int)4.3 seklinde yaziyoruz.
	
	*/

    float a = 4.3;
    int b = 2;
    
    printf("%f\n",a/b);
	printf("%d\n",(int)a);
	printf("%d\n",(int)9.1);
	printf("%f\n",(float)b);
	printf("%f\n",(float)9);
	return 0;
}
