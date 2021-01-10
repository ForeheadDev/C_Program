/* 
Program :  Median_MFauziRH.c
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
	int bil[20];
	int len;
	float median = 0;
	
	scanf("%d", &len);
	scanArray(bil, len);
	
	if(len % 2 != 0)
		median = bil[len/2]; // div with 2
	else
	{
		median = ( (float) (bil[(len/2) - 1] + bil[(len/2)]) / 2 ); // find element before mid and after mid then div with 2
	}
	
	printf("%.1f\n", median);
	
	return 0;
}
