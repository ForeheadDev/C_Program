#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *FF;
	
	FF = fopen("chara.txt", "r");
	
	if(FF == NULL)
	{
		printf("cannot open file\n");
		return 0;
	}
	
	char CC;
	char charSheet;

	int i;
	
	for(i = 0; i < 3; i++)
	{
		if(i == 0)
			charSheet = '1';
		if(i == 1)
			charSheet = '2';
			
		system("cls");
		while((CC=getc(FF))!=EOF && CC != charSheet)
		{ 
 			putch(CC);
		}
		
		printf("\n\n");
		char dialouge1[3][3][60] = { {{"Hey, so you choosen me"}, {"thank bro"}, {"let's have fun'"}}, {{"Is this our fist time?"}, {"Maybe just deja vu"}, {"xixixi"}}, {{"Hey, so you choosen me"}, {"thank bro"}, {"let's have fun'"}} };
		
	
		printf("+--Randomizer----------------------------------------+\n");
		printf("|  %-50s|\n", dialouge1[i][0]);
		printf("|  %-50s|\n", dialouge1[i][1]);
		printf("|  %-50s|\n", dialouge1[i][2]);
		printf("|                                                    |\n");
		printf("|  Press any key to continue >__                     |\n");
		printf("+----------------------------------------------------+\n");
		getch();	
	}
	
	fclose(FF);
	
	return 0;
}
