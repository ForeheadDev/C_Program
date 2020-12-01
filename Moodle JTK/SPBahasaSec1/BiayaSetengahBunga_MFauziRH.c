/* 
Program : BiayaSetengahBunga_MFauziRH.c
Deskripsi : menentukan biaya yang harus dibayar
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/
#include <stdio.h>

int main ()
{
	/* Kamus Data */
	float cost, funds, totalCost;
	
	/* Algoritma */
	scanf("%f\n%f", &cost, &funds);
	
	if(cost > 0 && cost < 150000 && funds >= 0 && funds <=100)
	{
		funds = cost * funds / 100;
		totalCost = cost + funds;
	}
	
	
	printf("%.2f\n", totalCost);
	return 0;
}
