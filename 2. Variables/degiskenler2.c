#include <stdio.h>

int main(){
	
	/*
		%c ----> char karakteri gosterir
				 
		Not 1 -->   char karakter = 'a'; 
					yukaridaki gibi bir tanimlama da
					%d ile char karakteri gosterilmek istenirse, karakterin
				 	ASCII tablosundanki decimal degerini verir.
				 	
		
		Not 2 -->   char karakter = 97; 
					yukaridaki gibi bir tanimlama da
					%c ile char karakteri gosterilmek istenirse, d
				 	ASCII tablosundanki decimal degerin karakter karsiligini degerini verir.
				 	
		Not 3 -->   tanimlama farketmeksizin  %d --> ASCII tablosundaki decimal deger
											  %c --> ASCII tablosundaki karakter deger
	*/
	
	char karakter = 'a';
	char karakter2 = 97 ;
	printf("%c\n",karakter);
	printf("%d\n",karakter);

	printf("%c\n",karakter2);
	printf("%d\n",karakter2);
	
	return 0;
}
