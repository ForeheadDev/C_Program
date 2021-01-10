#include <stdio.h>
#include <stdlib.h>

void Board3x3(char **b)
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

int main()
{
	int i,j;
	int boardSize;
	char **board;
	int count = 0;
	
	scanf("%d", &boardSize);
	board = malloc(sizeof(char*) * boardSize); // create a row of board
	for(i = 0; i < boardSize; i++)
		board[i] = malloc(sizeof(char) * boardSize); // create a coloum of board
	
	for(i = 0; i < boardSize; i++)
	{
		for(j = 0; j < boardSize; j++)
			board[i][j] = 'X';
	}
	Board3x3(board);
	
	for(i = 0; i < boardSize; i++)
	{
		count = 0;
		for(j = 1; j < boardSize; j++)
		{
			if(board[i][j-1] == board[i][j]);
				count++;
		}
		if(count == 3)
		{
			printf("win");
			break;
		}
			
	}
	
	

return 0;	
}

