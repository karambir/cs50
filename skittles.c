#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int
main()
{
	srand(time(NULL));
	int skittles = rand() % 1024;

	printf("How many Skittles are in the jar!.\n");
	printf("It's less that 1024, how many are there?\n");

	while ( skittles < 1024 )
	{
		int n = GetInt();
		 if ( n < skittles )
		{
			printf("Thats's not enough!\n");
		}
		else if ( n > skittles )
		{
			printf("That's too much!\n");
		}
		else
		{
			printf("That's right!\n");
			break;
		}
	}

}
