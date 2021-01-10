#include <stdio.h>
#include <stdlib.h>

/* =====================================*/
/*				Modul Tampilan			*/
/* =====================================*/
// Dibawah ini merupakan kumpulan modul-modul untuk mengurus bagian tampilan

/* Modul untuk membuat tampilan papan 3x3 */
void Draw3x3Board(char**board)
{
	system("cls");
	printf("\n  %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
    printf("\n\n");
}

/* Modul untuk membuat tampilan papan 5x5 */
void Draw5x5Board(char**board)
{
	system("cls");
	printf("\n  %c | %c | %c | %c | %c \n",board[0][0],board[0][1],board[0][2],board[0][3],board[0][4]);
    printf(" ---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c \n",board[1][0],board[1][1],board[1][2],board[1][3],board[1][4]);
    printf(" ---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c \n",board[2][0],board[2][1],board[2][2],board[2][3],board[2][4]);
    printf(" ---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c \n",board[3][0],board[3][1],board[3][2],board[3][3],board[3][4]);
    printf(" ---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c \n",board[4][0],board[4][1],board[4][2],board[4][3],board[4][4]);
    
    printf("\n\n");
}

/* Modul untuk membuat tampilan papan 7x7 */
void Draw7x7Board(char**board)
{
	system("cls");
	printf("\n  %c | %c | %c | %c | %c | %c | %c \n",board[0][0],board[0][1],board[0][2],board[0][3],board[0][4], board[0][5],board[0][6]);
    printf(" ---+---+---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c | %c | %c \n",board[1][0],board[1][1],board[1][2],board[1][3],board[1][4], board[1][5],board[1][6]);
    printf(" ---+---+---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c | %c | %c \n",board[2][0],board[2][1],board[2][2],board[2][3],board[2][4], board[2][5],board[2][6]);
    printf(" ---+---+---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c | %c | %c \n",board[3][0],board[3][1],board[3][2],board[3][3],board[3][4], board[3][5],board[3][6]);
    printf(" ---+---+---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c | %c | %c \n",board[4][0],board[4][1],board[4][2],board[4][3],board[4][4], board[4][5],board[4][6]);
    printf(" ---+---+---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c | %c | %c \n",board[5][0],board[5][1],board[5][2],board[5][3],board[5][4], board[5][5],board[5][6]);
    printf(" ---+---+---+---+---+---+---\n");
    printf("  %c | %c | %c | %c | %c | %c | %c \n",board[6][0],board[6][1],board[6][2],board[6][3],board[6][4], board[6][5],board[6][6]);
    
    printf("\n\n");
}


/* modul untuk menampilkan papan permainan */
void DrawBoard(char **board, int boardSize)
{
	if(boardSize == 3)
		Draw3x3Board(board);
	else if(boardSize == 5)
		Draw5x5Board(board);
	else if(boardSize == 7)
		Draw7x7Board(board);
}

/* =====================================*/
/*				Modul Logika			*/
/* =====================================*/
// dibawah ini merupakan kumpulan modul-modul untuk mengurus logika program

/* Ini adalah modul untuk membuat papan permainan */
char** CreateBoard(int boardSize)
{
	char **board;
	int i, j;
	
	/* Mengalokasikasin memori untuk papan permainan */
	board = malloc(sizeof(char*) * boardSize);
	for(i = 0; i < boardSize; i++)
	{
		board[i] = malloc(sizeof(char) * boardSize);
		/* menginisialisasikan papan kosong / berisi char spasi */
		for(j = 0; j < boardSize; j++)
		{
			board[i][j] = ' ';
		}
	}
	
	return board;
}

/* modul untuk menentukan syarat streak */
int StreakRule(int boardSize)
{
	int numberToStreak;
	if(boardSize == 3)
		numberToStreak = boardSize - 1;
	else if(boardSize == 5)
		numberToStreak = boardSize - 2;
	else if(boardSize == 7)
		numberToStreak = boardSize - 3;
	
	return numberToStreak;
}

/* Modul untuk memeriksa kemenangan secara horizontal */
int CheckHorizontal(char **board, int boardSize)
{
	int i, j, count = 0;
	int numberToStreak = StreakRule(boardSize);
	for(i = 0; i < boardSize; i++)
	{
		for(j = 1; j < boardSize; j++)
		{
			/* memeriksa apakah kotak tidak kosong */
			if(board[i][j-1] != ' ')
			{
				/* memeriksa apakah kotak memiliki simbol yang samas */
				if(board[i][j-1] == board[i][j])
					count++;
			}
		}
		
		/* jika simbol streak, maka menang */
		if(count >= numberToStreak)
			return 1;
		else
			count = 0;
	}
	/* jika tidak ada yang sama, belum ada pemenang */
	return 0;
}

/* Modul untuk memeriksa kemenangan secara vertical */
int CheckVertical(char **board, int boardSize)
{
	int i, j, count = 0;
	int numberToStreak = StreakRule(boardSize);
	for(i = 0; i < boardSize; i++)
	{
		for(j = 1; j < boardSize; j++)
		{
			/* memeriksa apakah kotak tidak kosong */
			if(board[j-1][i] != ' ')
			{
				/* memeriksa apakah kotak memiliki simbol yang samas*/
				if(board[j-1][i] == board[j][i])
					count++;
			}
		}
		
		/* jika simbol streak, maka menang */
		if(count >= numberToStreak)
			return 1;
		else
			count = 0;
	}
	/* jika tidak ada yang sama, belum ada pemenang */
	return 0;
}

/* Memeriksa kemengangan di diagonal Utama */
int CheckMainDiagonal(char **board, int boardSize)
{
	int i, j, count = 0;
	for(i = 1; i < boardSize; i++)
	{
		for(j = 1; j < boardSize; j++)
		{
			/* cek apakah sedang dalam kotak diagonal */
			if(i == j && board[i][j] != ' ')
			{
				/* cek apakah kotak diagonal sama dengan kotak diagonal sebelumnnya */
				if(board[i - 1][j - 1] == board[i][j])
					count++;
			}
			
		}
	}
	
	/* check streak */
	if(count >= StreakRule(boardSize))
		return 1;
	else
		count = 0;
	
	/* jika tidak ada yang sama, belum ada pemenang */
	return 0;
}

/* Memeriksa kemenangan di diagonal sekunder */
int CheckSecDiagonal(char **board, int boardSize)
{
	int i, j, count = 0;
	
	for(i = 1; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
		{
			/* cek apakah sedang dalam kotak diagonal sekunder */
			if(i + j == boardSize - 1 && board[i][j] != ' ')
			{
				/* cek apakah kotak diagonal sama dengan kotak diagonal sebelumnnya */
				if(board[i - 1][j + 1] == board[i][j])
					count++;
			}
		}
	}
	
	/* check streak */
	if(count >= StreakRule(boardSize))
		return 1;
	else
		count = 0;
	
	/* jika tidak ada yang sama, belum ada pemenang */
	return 0;
}

/* Modul untuk men-cek kemenangan */
int CheckWin(char **board, int boardSize)
{
	/* mencek kemenangan secara horizontal, vertical dan diagonal */
	if(CheckHorizontal(board, boardSize) || CheckVertical(board, boardSize) || CheckMainDiagonal(board, boardSize) || CheckSecDiagonal(board, boardSize))
		return 1;
	else
		return 0;
}


/* =====================================*/
/*				Modul Utama				*/
/* =====================================*/
// ini merupakan modul utama program

int main()
{
	char **board;
	int gameMode = 7;
	int boardSize, col, row, currentPlayer, isWin = 0, maxRound;
	
	boardSize = gameMode;
	board = CreateBoard(boardSize);
	maxRound = boardSize * boardSize;
	
	board[0][1] = 'X';
	board[1][1] = 'X';
	board[2][1] = 'X';
	board[3][1] = 'X';
	board[4][1] = 'X';
	
	DrawBoard(board, boardSize);
	isWin = CheckWin(board, boardSize);
	
	printf("%d", isWin);
	return 0;
}
