#include <stdio.h>
#include <cs50.h>

int
main()
{
	printf("Hello, how much change do I owe you?\n");
	float change1 = GetFloat();
	int i = 0;

	int change = change1 * 100;

	while ( change != 0 )
	{
	if ( change >= 25 )
	{
		change = change - 25;
		i++;
	}
	else if ( change >= 10  && change < 25 )
	{
		change = change - 10;
		i++;
	}
	else if ( change >= 5 && change < 10)
	{
		change = change - 5;
		i++;
	}
	else if ( change > 0 && change < 5)
	{
		change = change - 1;
		i++;
	}
	else
	{
		printf("You want to give me money? Try again.\n");
		GetFloat();
	}
	}
	printf("%d\n", i);
}
