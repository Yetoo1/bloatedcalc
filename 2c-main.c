/*
Title: Bloated C Calculator (no gui)
Author: Yetoo Happy
Contact: yetoohappy@gmail.com
Compile with: gcc 2c-main.c -o 2c-main.c
Reminder: Just remember, the reason why this is more convoluted than it should is because this is supposed to emulate the way the gui version works.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h>
#define ARRS 15 //array size is 15
#define RARRS 33 //the real array size which is all powerful and mighty is 10
static char sstr[ARRS] = {'0','1','2','3','4','5','6','7','8','9','+','-','*','/','E'}; //sstr means "stuff string"
static char dstr[RARRS]; //dstr means display string
static int z = 0;	
static void numpdd()
{
//This stands for "numpad display". This prints the "gui" of the numpad so that whenever the screen needs to be cleared, this can be redrawn  
printw("1 2 3 +\n4 5 6 -\n7 8 9 *\n  0 E /\n");		
}
static void dnm(char a)
{
//This stands for "Display n' Math" This will house the numbers and symbols in a string and display them as it appends it to the display so why is there already a math function that does that? Well you know what fuck you. HOW DO YOU LIKE IT NOW FUCK FACE? I'M GOING TO IMPLEMENT THE FUCKING DUEAL FUNCTION SHIT YOU ASS SHITTING NORMIE FUCK!!!1!1!!1 I know that this sould really be modular but it's not like anyone else is going to work on this in any future that realies on me posting this to github 
	int i;
	char sym;
	int numbers[RARRS];
	int index[];
	int result;
	clear();	
	if (a == 'E')
	{
		//get calc ready by inputting		
		for (i = 0; i < RARRS; i++) //however if the array was bigger you might as well do the sizeof(dstr) / sizeof(dstr[0]). You can't calculate within here because then it would be doing calculations based off of incomplete numbers, you can if you have something to signal that it has completed, but I don't want to deal with that now.
		{				
			switch(dstr[i])
			{
				//10 = addition
				//11 = subtraction
				//12 = multiplication
				//13 = division
				//case '+': numbers[i] = 10; break; 
				//case '-': numbers[i] = 11; break;
				//case '*': numbers[i] = 12; break;
				//case '/': numbers[i] = 13; break;
				//default: numbers[i] = dstr[i];
			}
		//putchar(numbers[i]);
		}
		//calculate the shit
		for (i = 0; i < RARRS; i++)
		{			
			switch(numbers[i])
			{
				case 10: printw("add"); break;
				case 11: printw("sub"); break;
				case 12: printw("mult"); break;
				case 13: printw("div"); break;
				default: strchr
			}
		}
	}
	else
	{	
		dstr[z] = a;
	}	
	if (z >= RARRS)
	{	
		printw("%sERROR, TOO MANY CHARS, DELETE SOMETHING!", dstr);
		//allow user to delete chars
	}
	printw("%s\n",dstr);
	numpdd();	
	z++;
}
int main (int argc, char** argv)
{
	int open; //keeps the instance for pushing buttons open	
	int i; //iterator in the while loop kept alive by the variable
	initscr();
	noecho();
	curs_set(FALSE);
	refresh();
	//why is there a window border with only fixed characters?
	//WINDOW* window = newwin(8, 7, 1, 0);	
		//wprintw(window,"1 2 3 +4 5 6 -7 8 9 x  0   E");
	numpdd();
	//maybe in the future make a hash table to make this less redundant	
	//maybe have all the shits in a string, have the shits look for the inputted number in the string, if exists place the char in the place of the case, that would make this a whole lot less redundant, no time at the moment
	while ((open = getch()) != 'q')
	{		
		//if (open == sstr[i]) won't work because it assumes on same iteration
		for (i = 0; i < ARRS; i++)
		{
			if (open == sstr[i])		
			{		
				dnm(open);
				break;
			}
		}	
	}
	refresh();	
	//wrefresh(window);
	//getch();
	//delwin(window);
	endwin();	
	/*  	
	int ask;
	char aswitch; //aswitch means ask switch
	int i;
	//for (i = 0; i <= 5; i++)
	//{
	//	switch(i)
	//	{
			/*case 1: printf("1 2 3 +\n"); //break;
			/*case 2: printf("4 5 6 -\n"); //break;
			/*case 3: printf("7 8 9 x\n"); //break;
			/*case 4: printf("  0   /\n"); //break;
			/*case 5: printf("E\n"); //break;
			//default: printf("\n");
	//	}
	//}
	//the text below doesn't output everything, feeling it's the switch statement
	//scanf("%s", ask);
	//if (strcmp(ask, )) need to do something more complicated with the display so that strings can be generated and called from and the deleted at the end. 
	system("/bin/stty raw");
	while((ask=getchar())!= 'q')
	{
		printf("\n");		
		putchar(ask);
	}	
	system("/bin/stty cooked");
	printf("You entered: %s\n",ask);
	return 0;
	*/

}

