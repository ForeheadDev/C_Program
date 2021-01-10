/* 
Program : ParkirMalamMinggu_MFauziRH.c
Deskripsi : menghitung biaya parkir
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	int jenisKendaraan;
	int waktu;
	int totalBiaya;
	
	/* Algoritma */
	scanf("%d", &jenisKendaraan); // input jenis kendaraan
	scanf("%d", &waktu); // input lama parkit (dalam jam)
	
	switch(jenisKendaraan)
	{
		case 1:
			if(waktu > 8)
				printf("disegel\n");
			else
			{
				if(waktu <=5)
				{
					totalBiaya = waktu * 1500;
				}else
				{
					totalBiaya = (waktu * 1500 ) + (500 * (waktu - 5));
				}
				
				printf("%d\n", totalBiaya);
			}	
			 
			break;
		case 2:
			if(waktu > 8)
				printf("disegel\n");
			else
			{
				if(waktu <=5)
				{
					totalBiaya = waktu * 1000;
				}else
				{
					totalBiaya = (waktu * 1000 ) + (500 * (waktu - 5));
				}
				
				printf("%d\n", totalBiaya);
			}
			
			break;
	}
	
	
	
	return 0;
}
