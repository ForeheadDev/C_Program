/* 
Program :  MinSepuluhData_MFauziRH.c
Deskripsi : menentukan nilai terkecil dari 10 data array
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 3 Menit
*/
#include <stdio.h>

/* Deklarasi Modul */ 
int Min(int x, int y);
int MinValueNumber(int num[], int n);
void InputValue(int num[], int n);

int main()
{
	/* Kamus Data */
	const int maxData = 10;
	int num1[maxData], num2[maxData];
	
	/* Algoritma */
	InputValue(num1, maxData);
	InputValue(num2, maxData);
	
	printf("%d %d\n", MinValueNumber(num1, maxData), MinValueNumber(num2, maxData));
	
	return 0;
}

int Min(int x, int y)
{
	if(x < y) return x;
	else return y;
}

int MinValueNumber(int num[], int n)
{
	int i, minNum;
	
	minNum = num[0];
	for(i = 1; i < n; i++)
		minNum = Min(minNum, num[i]);
	
	return minNum;
}

void InputValue(int num[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
}
