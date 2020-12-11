/* 
Program :  Maks10_MFauziRH.c
Deskripsi : menentukan bilangan terbesar dari 10 bilangan di dalam array
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 10 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

void scanArray(int arr[], int len)
{
	int i;
	scanf("%d", &arr[0]);
	for(i = 1; i < len; i++)
	{
		scanf(" %d", &arr[i]);
	}
	//printf("\n");
}

int main()
{
	/* Deklarasi */
	int bil[10];
	int len = 10, maks;
	int i;
	
	/* Algoritma */
	scanArray(bil, len);
	
	maks = bil[0];
	for(i = 0; i < len; i++)
	{
		if(maks < bil[i])
			maks = bil[i];
	}
	
	printf("%d\n", maks);
	
	return 0;
}
