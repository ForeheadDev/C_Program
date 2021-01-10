/* 
Deskripsi : Menghitung berapa jumlah SOS
Nama /Author : Dimas Wisnu Saputro
Tanggal/versi : 4 Desember 2020
*/
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    int j;
    char tabel[3][3];
    int hasil=0;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%c ", &tabel[i][j]);
        }
    }
    if(tabel[0][0]=='S' && tabel[2][2]=='S' && tabel[1][1]=='O'){
        hasil=hasil+1;
    }
    if(tabel[0][0]=='S' && tabel[2][0]=='S' && tabel[1][0]=='O'){
        hasil=hasil+1;
    }
    if(tabel[0][0]=='S' && tabel[0][2]=='S' && tabel[0][1]=='O'){
        hasil=hasil+1;
    }
    if(tabel[2][2]=='S' && tabel[2][0]=='S' && tabel[2][1]=='O'){
        hasil=hasil+1;
    }
    if(tabel[2][2]=='S' && tabel[0][2]=='S' && tabel[1][2]=='O'){
        hasil=hasil+1;
    }
    if(tabel[2][0]=='S' && tabel[0][2]=='S' && tabel[1][1]=='O'){
        hasil=hasil+1;
    }
    printf("%d", hasil);
    return 0;
}
