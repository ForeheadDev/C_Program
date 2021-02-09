#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int getInput(unsigned int timeout)
{
	clock_t time;
    for (; timeout != 0; timeout--)
    {
        if (kbhit())
        {
            return getch();
        }
        printf("%d ", timeout);
    }

    return EOF;
}
int main(void)
{
    int ch;

    if ((ch = getInput(10000)) != EOF)
    {
        printf("Input Found: %c", ch);
    }
    else
    {
        printf("No input found\n");
        
    }
    return EXIT_SUCCESS;
}
