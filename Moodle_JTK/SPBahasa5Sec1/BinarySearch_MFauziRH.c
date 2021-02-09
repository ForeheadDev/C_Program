/* 
Program :  BinarySearch_MFauziRH.c
Deskripsi : melakukan pencarian dengan metode binary search
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

#include <stdio.h>

/* Deklarasi Modul */
int BinarySearch(int arr[], int bottom, int top, int find);

void InsertionSort(int *arr, int len);

int main()
{
	/* Kamus Data */
	int jmlData, find, i, count = 0;
	scanf("%d %d", &jmlData, &find);
	int data[jmlData];
	int isFound;
	
	/* Algoritma */
	for(i = 0; i < jmlData; i++)
		scanf("%d", &data[i]);
	InsertionSort(data, jmlData);
	isFound = BinarySearch(data, 0, jmlData - 1, find);
	
	if(isFound > 0) 
	{
		printf("%d\n", isFound);
		printf("found\n");
	}
	else 
	{
		printf("%d\n", isFound * -1);
		printf("not found\n");	
	}
		
	
	return 0;
}


void InsertionSort(int *arr, int len)
{
	int i, key, j;
	for(i = 1; i < len; i++)
	{
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int BinarySearch(int arr[], int bottom, int top, int find)
{
	int middle, count = 0;
	while(bottom <= top)
	{
		// Check perulangan keberapa
		count++;
		
		middle = bottom + (top - bottom) / 2;
		
		// Check apakah find ditengah
		if(find == arr[middle])
			return count;
			
		// Check apakah find lebih besar dari tengah
		if(find > arr[middle])
			bottom = middle + 1;
		
		// Check apakah find lebih kecil dari tengah
		else
			top = middle - 1;
		
	}
	return count * -1;
}

