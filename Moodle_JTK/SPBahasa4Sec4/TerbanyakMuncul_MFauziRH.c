/* 
Program :  TerbanyakMuncul_MFauziRH.c
Deskripsi : menentukan angka yang terbanyak muncul
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 30 Menit
*/
#include <stdio.h>

/* Deklarasi Modul */ 
int MunculTerbanyak(int data[], int n);
int Max(int x, int y);
int MaxValueNumber(int num[], int n);
void InputValue(int num[], int n);

int main()
{
	/* Kamus Data */
	int n; // jumlah data
	scanf("%d", &n);
	int data[n];
	
	/* Algoritma */
	InputValue(data, n);
	printf("%d", MunculTerbanyak(data, n));
	
	
	
	
	
	return 0;
}

int MunculTerbanyak(int data[], int n)
{
	int maxNum; // max number dari inputan
	int mostFr; // frekuensi terbesar
	int i;
	
	maxNum = MaxValueNumber(data, n) + 1;// find the largest number for range array
	int count[maxNum];
	
	for(i = 0; i < maxNum ;i++) // inisialisasi 0
		count[i] = 0;
	
	for(i = 0; i < n; i++) // menghitung frekuensi kemunculan angka
		count[data[i]]++;
	
	mostFr = MaxValueNumber(count, maxNum); // frekuensi terbesar dari angka yang muncul
	for(i = 0; i < maxNum; i++) // mencari angka dengan frekuensi tersebut
	{
		if(count[i] == mostFr)
			return i;
	}
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



