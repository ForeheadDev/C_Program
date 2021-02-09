#include <stdio.h>

typedef struct {
	int x;
	int y;
} TITIK;

typedef struct{
	TITIK t1;
	TITIK t2;
	TITIK t3;
	TITIK t4;
}PERSEGI_PANJANG;

TITIK buat_titik(int x, int y){
    TITIK titikBaru;
    titikBaru.x = x;
    titikBaru.y = y;
    
    return titikBaru;
}

PERSEGI_PANJANG buat_persegi_panjang(TITIK t1, TITIK t2, TITIK t3, TITIK t4){
	PERSEGI_PANJANG persegiPanjangBaru;
	persegiPanjangBaru.t1 = t1;
	persegiPanjangBaru.t2 = t2;
	persegiPanjangBaru.t3 = t3;
	persegiPanjangBaru.t4 = t4;
	
	return persegiPanjangBaru;
    //return PERSEGI_PANJANG
}

int hitung_luas_tanah(PERSEGI_PANJANG p){
	int luas;
	luas = (p.t3.y - p.t1.y) * (p.t2.x - p.t1.x);
	
	return luas;
	//return luas tanah dengan tipe int
}

int main()
{
	TITIK t1, t2, t3, t4;
	t1 = buat_titik(50,5);
	t2 = buat_titik(200,5);
	t3 = buat_titik(50,45);
	t4 = buat_titik(200,45);
	
	PERSEGI_PANJANG p = buat_persegi_panjang(t1, t2, t3, t4);
	
	printf("%d", hitung_luas_tanah(p));
	
	return 0;
}
