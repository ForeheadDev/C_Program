/* 
Program :  SelisihMinMax_MFauziRH.c
Deskripsi : menentukan selisih dari bilangan terbesar dengan bilangan terkecil di dalam array
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
	int len = 10, maks, min;
	int i;
	
	/* Algoritma */
	scanArray(bil, len);
	
	maks = min = bil[0];
	for(i = 0; i < len; i++)
	{
		if(maks < bil[i])
			maks = bil[i];
		
		if(min > bil[i])
			min = bil[i];
	}
	
	printf("%d\n", maks - min);
	
	return 0;
}
