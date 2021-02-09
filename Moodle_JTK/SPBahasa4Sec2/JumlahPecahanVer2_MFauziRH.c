/* 
Program :  JumlahPecahan_MFauziRH.c
Deskripsi : mencari hasil penjumlahan pecahan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 25 Januari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 45 Menit
*/

#include <stdio.h>
int main()
{
	/* Deklarasi */
	int a, b, c, d, pembilang, penyebut, i;
	
	/* Algoritma */
	scanf("%d %d\n", &a, &b);
	scanf("%d %d", &c, &d);
	
	for(i = b <d  ? b : d ; i<=b * d ;i++)
	{
		if(!(i%b) && !(i%d)){
			a *= i/b;
			c *= i/d;
			a += c;
			b = i;
			break;
		}
	}
	
	for(i;i>0;i--)
		if(!(a%i) && !(b%i)){
			a /= i;
			b /= i;
		}
	
	printf("%d %d\n", a, b);
	
	return 0;
}
