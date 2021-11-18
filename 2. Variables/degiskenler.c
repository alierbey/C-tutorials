#include <stdio.h>

int main(){
	
	/* Degisken tipleri;
	
		char 	: karakterler icin a,b,c
		int  	: tamsayilar icin kullaniliyor
		float	: ondalik sayilar icin kullaniliyor
		double 	: ondalik sayilar icin kullaniliyor
		long ve short	: kapsami geniisletmek ve azaltmak icin
	
	*/
	
	/* Degisken tanimlama;
	
			<degisken_tipi> <degisken_adi>
	ornek:	 int a ;	
	
	*/
	
	/* Format Belirleyiciler
	
		%d ----> integer degerler icin kullaniliyor
				 %8d ----> sol taraftan 8 karakter bosluk birakir
		%f ----> float ve double degerler icin kullaniliyot
				 %.2f ----> virgulden sonra 2 karakter gosterir
		%c ----> char degerlericin kullaniliyor
		%s ----> karakter dizileri icin kullaniliyor
	
	*/
	
	/* Kacis karakterleri
		\n ----> alt satira gecer
		\t ----> tab karakteri kadar bosluk birakir
	*/
	
	int a = 12;
	float b = 3.5;
	
	printf("%d\n",a);
	printf("%8d\n",a);
	printf("%f\n",b);
	printf("%.2f\n",b);
	
	return 0;
}
