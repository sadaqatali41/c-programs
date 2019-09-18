#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100],i;
	clrscr();
	printf("Enter a word: ");
	gets(str);
	for(i=0;i<strlen(str)-1;i++)
	{
		if(i>0)
			printf("%c",str[i]);
	}
	getch();
}