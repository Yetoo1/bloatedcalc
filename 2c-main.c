/*
Title: Bloated C Calculator (no gui)
Author: Yetoo Happy
Contact: yetoohappy@gmail.com
Compile with: gcc 2c-main.c -o 2c-main.c
*/
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 11
int main (int argc, char** argv)
{
	//char ask[2];
	int ask[2];
	char aswitch; //aswitch means ask switch
	int i;
	int y;
	for (i = 0; i < 4; i++)
	{
		switch(i)
		{
			case 0: break;
			case 1: printf("+\n"); break;
			case 2: printf("-\n"); break;
			case 3: printf("x\n"); break;
			case 4: printf("/\n"); break;
			default: printf("\n");	
		}
		for (y = 0; y < 9; y++)
		{
			printf("%d", y); //fix this so that it returns every three or some shit	
		}
	}
	scanf("Enter a character on the display above: %s", ask);
	printf("You entered: %s\n", ask);
	return 0;

}

