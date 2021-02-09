/* 
Program :  Rerata_MFauziRH.c
Deskripsi : menentukan nilai rata-rata
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

/* Deklarasi Modul */ 
float Rerata(int data[], int n);
void InputValue(int data[], int n);

int main()
{
	/* Kamus Data */
	int n; // jumlah data
	scanf("%d", &n);
	int data[n];
	
	/* Algoritma */
	InputValue(data, n);
	
	printf("%.2f", Rerata(data, n));
	
	return 0;
}

float Rerata(int data[], int n)
{
	int i, sum;
	
	sum = 0;
	for(i = 0; i < n; i++)
		sum += data[i];
		
	return (float)sum/n;
}

void InputValue(int data[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d\n", &data[i]);
}
