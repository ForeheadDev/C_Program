/* 
Deskripsi : menampilkan bilagan di range x hingga y
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 30 November 2020/ ver 0.3
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int minBil, maxBil, i;
    
    scanf("%d %d", &minBil, &maxBil);
    
    if(minBil >= 0 && maxBil >= 0 && minBil <=100 && maxBil <= 100 && minBil <= maxBil)
    {
    	printf("%d", minBil);
    	for(i = minBil + 1; i <= maxBil; i++)
		{    
	        printf(" %d", i);
    	}
	}
    
    printf("\n");
    return 0;
}
