/* 
Deskripsi : menampilkan bilagan di range x hingga y
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 30 November 2020/ ver 0.2
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int minBil, maxBil, i;
    
    scanf("%d %d", &minBil, &maxBil);
    
    if(minBil >= 0 && maxBil >= 0 && minBil <=100 && maxBil <= 100 && minBil <= maxBil)
    {
    	for(i = minBil; i <= maxBil; i++)
		{    
	        if(i < maxBil)
	        {
	        	printf("%d ", i);
			}else 
			{
				printf("%d", i);
			}
    	}
	}
    
    printf("\n");
    return 0;
}
