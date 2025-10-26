//wapc to input a character.Categorize it as either uppercase letter,lowercase letter,number or any other miscellaneous symbol.

#include<stdio.h>
int main()
{
	char character;
	int asciiValue;
	printf("\nEnter a character constant:");
	scanf("%c",&character);
	asciiValue=character;
	if(asciiValue>=65 && asciiValue<=90)
	{
		printf("\n%c is an uppercase letter.", character);
	}
	else if(asciiValue>=97 && asciiValue<=122)
	{
			printf("\n%c is a lowercase letter.", character);
	}
	else if(asciiValue>=48 && asciiValue<=57)
	{
			printf("\n%c is a number.", character);
	}
	else
	{
			printf("\n%c is a miscellaneous symbol.", character);
	}
	return 0;
}