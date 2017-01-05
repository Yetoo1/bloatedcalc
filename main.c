#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	//char string[100];	
	char n[6] = {'a','b','c','d','e','\0'}; char string[100];
	strcpy(string, n);
	string[6] = '\0';
	printf("%s\n",string);	
	return 0;
}
