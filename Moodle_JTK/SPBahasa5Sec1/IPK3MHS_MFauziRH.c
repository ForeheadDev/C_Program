/* 
Program :  IPK3MHS_MFauziRH.c
Deskripsi : menghitung ipk 3 mahasiswa
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 45 Menit
*/

#include <stdio.h>
#include <stdlib.h>


/* Deklarasi Modul */
float HitungIPK(char ddp, char matdis, char matter, char kk);
int IdxAngka(char c);

int main()
{
	/* Kamus Data */
	char nama[3][255] = {};
	char ddp, matdis, matter, kk;
	int i;
	float IPK[3];
	
	/* Algoritma */
	for(i = 0; i < 3; i++)
	{
		scanf("%[^\n]%*c", nama[i]);
        scanf("%c %c %c %c", &ddp, &matdis, &matter, &kk);
        if(i < 2){
            scanf("\n");
        }
		IPK[i] = HitungIPK(ddp, matdis, matter, kk);
	}
	
	for(i = 0 ; i < 3; i++){
        printf("%s %.2f\n", nama[i], IPK[i]);
    }
	
	
	return 0;
}

float HitungIPK(char ddp, char matdis, char matter, char kk)
{
	return (float)( (IdxAngka(ddp) * 4) + (IdxAngka(matdis) * 3) + (IdxAngka(matter) * 3) + (IdxAngka(kk) * 2) ) / 12;
}

int IdxAngka(char c)
{
	switch(c)
	{
		case 'A' : return 4; break;
		case 'B' : return 3; break;
		case 'C' : return 2; break;
		case 'D' : return 1; break;
	}
	return 0;
}


