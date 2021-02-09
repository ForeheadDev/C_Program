#include <stdio.h>
#include <string.h>

#define HIGHSCORE_FILENAME "highscores.dat"

// UDT
typedef struct
{
	char name[20];
	int duration;
	int boardSize;
}HighscoreData;

// Modul Declaration
void WriteData();
int ReadData();
void Highscores();
void SwapData(int x, int y);
void SortHighscores(int criteria, int amount);
int SortCriteria(int i, int k, int criteria);

// Global Variabel
HighscoreData data, listData[100], tempData; // highscore data

// Main modul
int main()
{
	WriteData();
	Highscores();
	return 0;
}

void Highscores()
{
	int amount, i, criteria = 1;
	amount = ReadData();
	do
	{
		system("CLS");
		printf("\t\t==================\n");
		printf("\t\t     Highscores   \n");
		printf("\t\t==================\n\n");
		printf("\t\t==================\n");
		printf("\tKetik [1] untuk mengurutkan berdasarkan durasi\n");
		printf("\tKetik [2] untuk mengurutkan berdasarkan ukuran papan\n");
		printf("\tKetik [3] untuk mengurutkan berdasarkan nama\n");
		printf("\tKetik [1] untuk kembali ke main menu\n\n\n");
		
		SortHighscores(criteria, amount);
		printf("Nama Pemain\t\tDurasi Permainan(detik)\t\tUkuran Papan\n");
		for(i = 0; i < amount; i++)
		{
			printf("%-20s", listData[i].name);
			printf("\t\t  ");
			printf("%d", listData[i].duration);
			printf("\t\t\t     ");
			printf("%d", listData[i].boardSize);
			printf("\n");
		}
		printf("sort berdasarkan : ");scanf("%d", &criteria);
	}while(criteria != 4);
}

void WriteData()
{
	// Mengisikan data ke highscore
	strcpy(data.name, "fauzi");
	data.duration = 30;
	data.boardSize = 5;
	
	// mengisikan data ke file highscores
	FILE *fp = fopen(HIGHSCORE_FILENAME, "ab"); 
	fwrite(&data, sizeof(HighscoreData), 1, fp);
	fclose(fp);
	
}

int ReadData()
{
	// membaca semua aata yang ada di file highscores
	// mengembalikan jumlah data yang telah di baca
	int amount = 0;
	FILE *fp = fopen(HIGHSCORE_FILENAME, "rb");
	
	while( fread(&listData[amount], sizeof(HighscoreData), 1, fp) == 1)
		amount++;
		
	fclose(fp);
	return amount;
}

int SortCriteria(int i, int j, int criteria)
{
	if(criteria == 1)
	{
		// mengurutkan berdasarkan durasi permainan
		return listData[j].duration < listData[i].duration;
	} else if(criteria == 2)
	{
		// mengurutkan berdasarkan ukuran papan permainan
		return listData[j].boardSize > listData[i].boardSize;
	} else if(criteria == 3)
	{
		// mengurutkan berdasarkan nama
		return strcmp(listData[j].name, listData[i].name) < 0;
	}
}

void SortHighscores(int criteria, int amount)
{
	// size merupakan ukuran papan permainan
	// time merupakan durasi permainan
	int i, j;
	
	for(i = 0; i < amount - 1; i++)
	{
		for(j = i + 1; j < amount; j++)
		{
			if(SortCriteria(i, j, criteria))
			{
				SwapData(i, j);
			}
		}
	}
}

void SwapData(int x, int y)
{
	int temp;
	tempData = listData[y] ;
	listData[y] = listData[x];
	listData[x] = tempData ;
}
