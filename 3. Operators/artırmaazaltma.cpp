#include <stdio.h>

int main(){

	/* 
	
	artýrma azaltma operatorleri
	
	a += 2 ----> a'ya 2 ekler  ---> a = a + 2
	a++    ----> a'yi 1 artýrýr
	
	int b = a++ -->  once a'nin degerini b'ye ata, sonra 1 artýr
	int b = ++a -->  once a'nin degerini 1 artýr, sonra b'ye ata 
	
	*/

    int a = 2;
    a += 1;
    
    int b = a;
    int c = ++a;
    printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	return 0;
}
