#include<stdlib.h> 
#include<stdio.h> 
#define BOYUT 7

// İki alt diziye bölünür
// İlk dizi ==> diz[l..m] 
// İkinci dizi ==> dizi[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	// gecici diziler yarat
	int L[n1], R[n2]; 

	// Kopyala
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 


	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 


	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 


void mergeSort(int dizi[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 

		mergeSort(dizi, l, m); 
		mergeSort(dizi, m+1, r); 

		merge(dizi, l, m, r); 
	} 
} 



int main() 
{ 
	int dizi[] = {22, 12, 45, 8, 11, 9, 7}; 
	
	mergeSort(dizi, 0, BOYUT - 1); 

	for (int i=0; i < BOYUT; i++) 
		printf("%d ", dizi[i]); 
	return 0; 
} 
