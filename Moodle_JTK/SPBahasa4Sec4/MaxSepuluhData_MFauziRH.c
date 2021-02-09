/* 
Program :  MaxSepuluhData_MFauziRH.c
Deskripsi : menentukan nilai terbesar dari 10 data array
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 8 Menit
*/
#include <stdio.h>

/* Deklarasi Modul */ 
int Max(int x, int y);
int MaxValueNumber(int num[], int n);
void InputValue(int num[], int n);

int main()
{
	/* Kamus Data */
	const int maxData = 10;
	int num1[maxData], num2[maxData];
	
	/* Algoritma */
	InputValue(num1, maxData);
	InputValue(num2, maxData);
	
	printf("%d %d\n", MaxValueNumber(num1, maxData), MaxValueNumber(num2, maxData));
	
	return 0;
}

int Max(int x, int y)
{
	if(x > y) return x;
	else return y;
}

int MaxValueNumber(int num[], int n)
{
	int i, maxNum;
	
	maxNum = num[0];
	for(i = 1; i < n; i++)
		maxNum = Max(maxNum, num[i]);
	
	return maxNum;
}

void InputValue(int num[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
}
