#include <stdio.h>

int CheckStreak(char board[], int boardSize)
{
	if(boardSize == 5)
	{
		if
		(
			(board[0] == board[1] && board[1] == board[2] && board[2] == board[3]) ||
			(board[1] == board[2] && board[2] == board[3] && board[3] == board[4])	
		)
		{
			if(board[2] == 'X' || board[2] == 'O')
			{
				return 1;
			}	
		}
	}else if(boardSize == 7)
	{
		if
		(
			(board[0] == board[1] && board[1] == board[2] && board[2] == board[3] && board[3] == board[4]) ||
			(board[2] == board[3] && board[3] == board[4] && board[4] == board[5] && board[5] == board[6]) ||
			(board[1] == board[2] && board[2] == board[3] && board[3] == board[4] && board[4] == board[5])	
		)
		{
			if(board[2] == 'X' || board[2] == 'O')
			{
				return 1;
			}	
		}
	}
		
}

int main()
{
	char board5[5][5] =
	{
		{'X','X','X','O','O'},
		{'O','O','X','X','X'},
		{'O','O','X','X','X'},
		{'X','O','X',' ',' '},
		{'O','X','O','X','X'},
	};
	
	char board7[7][7] =
	{
		{'O',' ','X',' ','X','X','O'},
		{' ','X',' ',' ',' ','O',' '},
		{' ',' ','X',' ','O',' ',' '},
		{'X',' ',' ','O',' ',' ',' '},
		{'X',' ','O',' ','X',' ',' '},
		{'X',' ',' ',' ',' ','X',' '},
		{'X','X','X','O','O',' ','O'}
	};
	
	int i, j, boardSize = 7; // ubah ukuran untuk melihat perbedaan
	char temp[boardSize];
	
	// menampilkan papan
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
		{
			printf("%c ", board7[i][j]);
		}
		printf("\n");
	}
	
	
	/* Check Horizontal */
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
			temp[j] = board7[i][j];
		
		if(CheckStreak(temp, boardSize) == 1)
		{
			printf("win Horizontaly at line: %d", i);
			break;
		}
	}
	
	/* Check Vertical */
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
			temp[j] = board7[j][i];
		
		if(CheckStreak(temp, boardSize) == 1)
		{
			printf("win Verticaly at line: %d", i);
			break;
		}
	}
	
	/* Check Diagonal */
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
		{
			if(i == j)
			{
				temp[j] = board7[j][i];
			}
		}
	}
	
	if(CheckStreak(temp, boardSize) == 1)
	{
		printf("win at Main Diagonaly 1");
	}
	
	/* Check sec Diagonal */
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
		{
			if(i + j == boardSize - 1)
			{
				temp[j] = board7[j][i];
			}
		}
	}
	
	if(CheckStreak(temp, boardSize) == 1)
	{
		printf("win at secondary Diagonaly 1");
	}
	
	return 0;
}
