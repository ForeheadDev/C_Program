/* 
Program : Sort3Desc_MFauziRH.c
Deskripsi : mengurutkan 3 buah elemen integer secara descending
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 8 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

void inputArray(int arr[], int len)
{
	int i = 0;
	scanf("%d", &arr[0]);
	for(i = 1; i < len; i++)
		scanf(" %d", &arr[i]);
}

void printArray(int arr[], int len)
{
	int i = 0;
	printf("%d", arr[0]);
	for(i = 1; i < len; i++)
		printf(" %d", arr[i]);
}

int main()
{
	// menggunakan algoritma insertion sort
	int key; 
	int bil[3];
	int len = 3;
	int i, j; // counter loop
	
	inputArray(bil, len);
	
	for(i = 1; i < len; i++)
	{
		j = i;
		while(j > 0 && bil[j - 1] < bil[j])
		{
			key = bil[j];
			bil[j] = bil[j - 1];
			bil[j - 1] = key;
			j--;
		}
	}
	
	printArray(bil, len);

	return 0;
}

