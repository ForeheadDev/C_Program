/* 
Program :  FinalTisigram_MFauziRH.c
Deskripsi : menentukan nilai tertinggi yang lolos Tisigram
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 10 Menit
*/

#include <stdio.h>

/* Deklarasi Modul */
void InsertionSort(int *arr, int len);
void NilaiFinalis(int arr[], int jmlFinalis);

int main()
{
	/* Kamus Data */
	int peserta, finalis;
	scanf("%d %d", &peserta, &finalis);
	int nilai[peserta];
	int i;
	
	/* Algoritma */
	for(i = 0; i < peserta; i++)
		scanf("%d", &nilai[i]);
		
	InsertionSort(nilai, peserta);
	NilaiFinalis(nilai, finalis);
	
	return 0;
}

void NilaiFinalis(int arr[], int jmlFinalis)
{
	int i;
	for(i = 0; i < jmlFinalis; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void InsertionSort(int *arr, int len)
{
	int i, key, j;
	for(i = 1; i < len; i++)
	{
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
