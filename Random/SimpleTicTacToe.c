#include <stdio.h>
#include <stdlib.h>

void Board3x3(char**b)
{
	system("cls");
	printf("===========================\n");
	printf("========Tic Tac Toe========\n");
	printf("===========================\n\n");
	
	printf("\n  %c | %c | %c \n",b[0][0],b[0][1],b[0][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c \n",b[1][0],b[1][1],b[1][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c \n",b[2][0],b[2][1],b[2][2]);
    printf("\n\n");
}

void DrawBoard(char **b)
{
	Board3x3(b);
}

void ErrorHandling(int *error)
{
	if(*error == 1)
	{
		printf("Input tidak valid, harap masukan ulang\n");
		*error = 0;
	}
}

void GetInputUser(char **board, int boardSize, int *turn ,int *error)
{
	int row, col;
	printf("giliran player %d\n", *turn);
	printf("Masukan baris : ");
	scanf("%d", &row);
	printf("Masukan kolom : ");
	scanf("%d", &col);
	
	if(row < boardSize && col < boardSize && board[row][col] == ' ')
	{
		if(*turn == 1)
		{
			board[row][col] = 'X';
			*turn += 1;
		}	
		else
		{
			board[row][col] = 'O';
				*turn = 1;
			}				
		}
	else
		*error = 1;
}

int CheckWin(char **board, int boardSize)
{
	int i, j;
	int count = 1;
	
	//check horizontal
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
		{
			if(j=i)
			{
				
			}
		}	
		if(j == boardSize - 1)
			return 1;
	}
	
	

	
	return 0;
		
}

int main()
{
	/* Deklarasi */
	int boardSize = 3;
	char **board;
	int i, j;
	int win = 0;
	int row, col;
	int error;
	int turn = 1;
	
	//scanf("%d", &boardSize); // inputing the boardSize
	
	// Create Board
	board = malloc(sizeof(char*) * boardSize); // create a row of board
	for(i = 0; i < boardSize; i++)
		board[i] = malloc(sizeof(char) * boardSize); // create a coloum of board
	
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
			board[i][j] = ' ';
	}
	do
	{
		DrawBoard(board);
		ErrorHandling(&error);
		GetInputUser(board, boardSize, &turn, &error);
		win = CheckWin(board, boardSize);
	}while(win == 0);
	
	printf("%d", win);
	return 0;
}
