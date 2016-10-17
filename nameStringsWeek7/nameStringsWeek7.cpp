// nameStringsWeek7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>


int main()
{
	int i = 0;
	int j = 0;
	int v = 0;

	char names[10][25] = { "Whitney Wright", "Vicky Collins","Essie Ray","Sammy Wade","Kara Wilson","Christie Butler","Ginger Dennis","Sean Parsons","Beatrice Simpson","Leigh Gutierrez" };
	char firstNames[10][25];
	char lastNames[10][25];
	char mixedNames[10][25];

	//Detect first names and puts then into string firstName
	puts("FIRST NAMES:");
	do
	{
		if (names[i][j] == ' ') //when a space is found \0 is iserted in that same space in firstName to end that string
		{
			firstNames[i][j] = '\0';
			puts(firstNames[i]);
			i++;
			j = 0; //resetting for next string
		}
		else       //I increase j by one and check to see if it's a space
		{
			firstNames[i][j] = names[i][j];
			j++;
		}
	} while (i < 10);




	printf("\n");

	//Detects the last name from names and inserts it inside lastName
	puts("SURNAMES:");
	for (i = 0, j = 0; i < 10; i++)
	{
		while (names[i][j] != ' ') //checking for a space and increasing j by 1 until a space is found
			j++;
		while (names[i][j] != '\0')
		{
			lastNames[i][v] = names[i][j + 1];//storing every value after the space inside lastNames until a \0 is found
			v++;
			j++;
		}
		lastNames[i][v] = '\0'; //ending the string
		puts(lastNames[i]);
		v = 0;
		j = 0;
	}
	printf("\n");

	//Creates a new name by combining strings from firstNames and lastNames
	puts("NEW NAMES:");
	for (i = 0, j = 9; i <= 9; i++, j--)
	{
		strcpy_s(mixedNames[i], firstNames[i]); //Copy instead of Concatenate as mixedNames is empty
		strcat_s(mixedNames[i], " ");
		strcat_s(mixedNames[i], lastNames[j]);
		puts(mixedNames[i]);
	}

	printf("\n");
	return 0;
}

