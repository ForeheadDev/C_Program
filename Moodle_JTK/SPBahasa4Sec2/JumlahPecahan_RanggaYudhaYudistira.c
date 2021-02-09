/*
Program : JumlahPecahan_RanggaYudhaYudistira.c
Deskripsi : Mencari nilai dari hasil penjumlahan dua pecahan
Nama : Rangga Yudha Yudistira
NIM : 201524022
Tanggal : 14/12/2020
*/
#include <stdio.h>
typedef struct{
	int pembilang;
	int penyebut;
}pecahan;

int main(){
	//kamus data
	int i;
	pecahan a,b;
	
	//algoritma
	scanf("%d %d",&a.pembilang,&a.penyebut);
	scanf("%d %d",&b.pembilang,&b.penyebut);
	for(i = a.penyebut<b.penyebut ? a.penyebut : b.penyebut ; i<=a.penyebut*b.penyebut ;i++)
		if(!(i%a.penyebut) && !(i%b.penyebut)){
			a.pembilang *= i/a.penyebut;
			b.pembilang *= i/b.penyebut;
			a.pembilang += b.pembilang;
			a.penyebut = i;
			break;
		}
	
	for(i;i>0;i--)
		if(!(a.pembilang%i) && !(a.penyebut%i)){
			a.pembilang /= i;
			a.penyebut /= i;
		}
	
	printf("%d %d\n",a.pembilang,a.penyebut);
	return 0;
}
