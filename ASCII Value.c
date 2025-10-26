//WAPC to input a character.Find its ASCII Value.

#include<stdio.h>
int main()
{
	char character;
	printf("\nEnter a character:");
	scanf("%c",&character);
	printf("\nThe ASCII Value of %c is %d", character, character);
	return 0;
}