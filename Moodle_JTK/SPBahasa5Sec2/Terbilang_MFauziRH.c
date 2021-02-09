/* 
Program :  Terbilang_MFauziRH.c
Deskripsi : merubah angka menjadi kalimat terbilang
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 6 Februari 2021/ ver 0.1.ATM
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: > 120 Menit
*/

#include <stdio.h>
#include <string.h>

/* Deklarasi Modul */
void KonversiTerbilang(int nominal, char terbilang[]);
void CheckSatuan(char terbilang[], int angka);
void CheckBelasan(char terbilang[], int angka);
void CheckPuluhan(char terbilang[], int angka);
void CheckRatusan(char terbilang[], int angka);

int main()
{
	/* Kamus Data */
	int nominal;
	char terbilang[5000] = {};
	
	/* Algoritma */
	scanf("%d", &nominal);
	
	KonversiTerbilang(nominal, terbilang);
	
	printf("%s", terbilang);
	
	return 0;
}

void KonversiTerbilang(int nominal, char terbilang[])
{
	int jutaan, ribuan, sisa;
	if(nominal / 1000000 != 0)
	{
		jutaan = nominal / 1000000;
		CheckRatusan(terbilang, jutaan);
		jutaan %= 100;
		if(jutaan / 10 == 1)
			CheckBelasan(terbilang, jutaan);
		else
		{
			CheckPuluhan(terbilang, jutaan);
			jutaan %= 10;
			CheckSatuan(terbilang, jutaan);
		}
		strcat(terbilang, "juta ");
	}
	
	if(nominal / 1000 !=0)
	{
		ribuan = (nominal / 1000) % 1000;
		CheckRatusan(terbilang, ribuan);
		ribuan %= 100;
		
		if(ribuan / 10 == 1)
			CheckBelasan(terbilang, ribuan);
		else
		{
			CheckPuluhan(terbilang, ribuan);
			ribuan %= 10;
			CheckSatuan(terbilang, ribuan);
		}
		strcat(terbilang, "ribu ");
	}
	
	if(nominal/1 !=0)
	{
		sisa = nominal % 1000;
		CheckRatusan(terbilang, sisa);
		sisa %= 100;
		if(sisa / 10 == 1)
			CheckBelasan(terbilang, sisa);
		else
		{
			CheckPuluhan(terbilang, sisa);
			sisa %= 10;
			CheckSatuan(terbilang, sisa);
		}
	}
	
	// remove last space
	terbilang[strlen(terbilang) - 1] = '\0';
}

void CheckSatuan(char terbilang[], int angka)
{
	switch(angka)
	{
		case 1: strcat(terbilang, "satu "); break;
		case 2: strcat(terbilang, "dua "); break;
		case 3: strcat(terbilang, "tiga "); break;
		case 4: strcat(terbilang, "empat "); break;
		case 5: strcat(terbilang, "lima "); break;
		case 6: strcat(terbilang, "enam "); break;
		case 7: strcat(terbilang, "tujuh "); break;
		case 8: strcat(terbilang, "delapan "); break;
		case 9: strcat(terbilang, "sembilan "); break;
	}
}

void CheckBelasan(char terbilang[], int angka)
{
 	switch(angka)
	{
		case 11: strcat(terbilang, "sebelas "); break;
		case 12: strcat(terbilang, "dua belas "); break;
		case 13: strcat(terbilang, "tiga belas "); break;
		case 14: strcat(terbilang, "empat belas "); break;
		case 15: strcat(terbilang, "lima belas "); break;
		case 16: strcat(terbilang, "enam belas"); break;
		case 17: strcat(terbilang, "tujuh belas"); break;
		case 18: strcat(terbilang, "delapan belas"); break;
		case 19: strcat(terbilang, "sembilan belas"); break;
	}	
}

void CheckPuluhan(char terbilang[], int angka)
{
	if(angka / 10 != 0)
	{
		if(angka / 10 == 1)
			strcat(terbilang, "se");
		else
			CheckSatuan(terbilang, angka / 10);
		strcat(terbilang, "puluh ");	
	}
}

void CheckRatusan(char terbilang[], int angka)
{
	if(angka / 100 != 0)
	{
		if(angka / 100 == 1)
			strcat(terbilang, "se");
		else
			CheckSatuan(terbilang, angka / 100);
		strcat(terbilang, "ratus ");
	}
}
