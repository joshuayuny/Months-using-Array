// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MAX_ALPHA 26
#define NULL 0

int b;
int i = 0;
int j;

char * months[] = {
	"zero",
	"january",
	"february",
	"march",
	"april",
	"may",
	"june",
	"july",
	"august",
	"september",
	"october",
	"november",
	"december",
	"" };

int main(void)
{
	for (i = 1; months[i][0] != NULL; i++)
	{
		for (j = 0; months[i][j] != NULL; j++)
		{
			printf("%c . ", months[i][j]);
		}
		printf("\n");
		for (b=0; b<MAX_ALPHA; b++)
		{
			printf("%c . ", 'a' + b);
		}
		printf("\n");
		for (b = 0; b<MAX_ALPHA; b++)
		{
			printf("%c . ", 'z' - b);
		}
		printf("\n");
	}
	return 0;
}