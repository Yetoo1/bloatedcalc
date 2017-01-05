/*
Title: Bloated C Calculator (no gui)
Author: Yetoo Happy
Contact: yetoohappy@gmail.com
Compile with: gcc 2c-main.c -o 2c-main.c
*/
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 11
static void math(char* a)
{
	int switch;
	printf("%s\n", a);
	//insert the case here
	switch(switch)
	{
		case 0: break; //addition
		case 1: break; //subtraction
		case 2: break; //multiplication
		case 3: //division
	}
	//ask if user wants to continue or not
}
int main (int argc, char** argv)
{
	char ask[ARRAY_SIZE];
	scanf("%s", ask);
	printf("You entered: %s\n", ask);
	math(ask);
	return 0;

}

