/* 
Program :  MatriksJumlah_MFauziRH.c
Deskripsi : menghitung penjumlahan matriks ordo 3x3
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 16 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

void scanArray(int arr[3][3], int len)
{
	int i, j; // counter array
	
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			if(j != len-1)
				scanf("%d ", &arr[i][j]);
			else
				scanf("%d\n", &arr[i][j]);
		}
	}
}

void printArray(int arr[3][3], int len)
{
	int i, j; // counter array
	
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			if(j != len-1)
				printf("%d ", arr[i][j]);
			else
				printf("%d\n", arr[i][j]);
		}
	}
}

int main()
{
	/* Deklarasi */
	int A[3][3];
	int B[3][3];
	int result[3][3];
	int i, j; // counter array
	
	/* Algoritma */
	scanArray(A, 3);
	scanArray(B, 3);
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			result[i][j] = A[i][j] + B[i][j];
		}
	}
	
	printArray(result,3);
	
	return 0;
}
