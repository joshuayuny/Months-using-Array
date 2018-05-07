// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define MAX_ALPHA 26
#define NULL 0

char keyword[] = "months";
int a = 0;

int i;
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
	for (i = 1; months[i][0] != 0; i++)
	{
		for (j = 0; months[i][j] != 0; j++)
		{
			printf("%c", months[i][j]);
		}
		printf("\n");
	}
	
	for (i = 1; i < 26; i++)
	{
		printf("%c . ", 'a' + i);
	}

	printf("\n");	
	
	//
	// display the uppercase alphabet in descending order
	//

	for (i = 0; i<MAX_ALPHA; i++)
	{
		printf("%c . ", 'z' - i);
	}

	printf("\n");

    return 0;
}

