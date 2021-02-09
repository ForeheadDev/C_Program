#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define HIGHSCORE_FILENAME "highscore.dat"

/* Modul Highscore */
int sortCriteria(int i, int j, int criteria);
void swap (int i, int j);
int GetData();
void writeData();
void writeData2();
void sortHighscore(int kriteria, int N );

void highscore();

typedef struct {
	char name[21];
	bool win;
	int numberOfMoves;
	int numberOfKicks;
	long long int duration;
} HighscoreData;

HighscoreData data,list[100],temp;

int main()
{
	writeData();
	writeData2();
	highscore();
}

void highscore (){
	/*Menu highscore, menampilkan data pemain sesuai kriteria highscore */
	int i,N,kriteria=3;
	/*  N merupakan banyak nya data pemain yang ada
		kriteria merupakan jenis sorting untuk menampilkan highscore
	*/
	N = GetData();

	do {
		system("cls");
		printf("1.Banyak Ditendang \n");
		printf("2.Banyak Langkah \n");
		printf("3.Nama \n");
		printf("4.Menu Utama \n");
		printf("\n");
		/* menampilkan data highscore berdasarkan jenis sorting*/

		if ( kriteria != 4){
			sortHighscore(kriteria,N);
			printf("Nama Pemain\tBanyak Langkah\tBanyak Ditendang\tStatus");printf("\n");
			for ( i = 0 ; i < N ; i++ ){
				printf("%-15s ",list[i].name);
				printf("\t");
				printf("%d",list[i].numberOfMoves);
				printf("\t\t");
				printf("%d",list[i].numberOfKicks);
				printf("\t\t");

				if (list[i].win == true )
					printf("Menang");
				else
					printf("Kalah");
				printf("\n");
			}

		}
		 printf("masukan jenis sorting : ");scanf("%d",&kriteria);

	}while ( kriteria != 4 ) ;

}

void swap (int i, int j){
	temp = list[j] ;
	list[j] = list[i];
	list[i] = temp ;
}


int GetData() {
	/*  Mengambil data dari file highscore yang sudah disimpan dari modul writeData
		Mengembalikan / menghitung nilai N yaitu banyak nya data yang tersimpan dalam file highscore
	*/

	int N = 0;
	FILE *fp = fopen(HIGHSCORE_FILENAME, "rb");
	while ( fread(&list[N], sizeof(HighscoreData), 1, fp ) == 1 ) N++;
	fclose(fp);
	return N;
}

void writeData(){
	/* Memindahkan data pemain ke data highscore */
	strcpy(data.name,"jajang");
	data.numberOfMoves = 2 ;
	data.numberOfKicks = 3 ;
	data.win = true;

	/* Tulis data ke dalam file */
	FILE *fp = fopen(HIGHSCORE_FILENAME, "ab");
	fwrite(&data, sizeof(HighscoreData), 1, fp);
	fclose(fp);
}
void writeData2(){
	/* Memindahkan data pemain ke data highscore */
	strcpy(data.name,"asep");
	data.numberOfMoves = 10 ;
	data.numberOfKicks = 5 ;
	data.win = true;

	/* Tulis data ke dalam file */
	FILE *fp = fopen(HIGHSCORE_FILENAME, "ab");
	fwrite(&data, sizeof(HighscoreData), 1, fp);
	fclose(fp);
}


int sortCriteria(int i, int j, int criteria) {
	if ( criteria == 1 ) {
		/* sorting berdasarkan jumlah menendang musuh */
		return list[j].numberOfKicks < list[i].numberOfKicks;
	} else if ( criteria == 2 ) {
		/* sorting berdasarkan banyak melangkah */
		return list[j].numberOfMoves< list[i].numberOfMoves;
	} else if ( criteria == 3 ) {
		/* sorting berdasarkan nama (ascending) */
		return strcmp(list[j].name,list[i].name ) < 0;
	}
}


void sortHighscore(int kriteria, int N ) {
	/* sorting highscore
		i merupakan giliran pemain
		j merupakan no Bidak pemain
	*/
	int i, j ;
	for ( i = 0 ; i < N-1 ; i++ ){
		for ( j = i+1 ; j < N ; j++){
			if ( sortCriteria(i, j, kriteria) ) {
				swap(i,j);
			}
		}
	}
}
