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
	//int ask[10];
	char ask;
	char aswitch; //aswitch means ask switch
	int i;
	for (i = 0; i <= 5; i++)
	{
		switch(i)
		{
			//case 0: break;
			case 1: printf("1 2 3+\n"); break;
			case 2: printf("4 5 6-\n"); break;
			case 3: printf("7 8 9x\n"); break;
			case 4: printf("  0  /\n"); break;
			case 5: printf("Enter \n"); break;
			default: printf("\n");
		}
	}
	//the text below doesn't output everything, feeling it's the switch statement
	scanf("/*Enter a character on the display above:*/%s\n", ask);
	printf("You entered: %s\n",ask);
	return 0;

}

