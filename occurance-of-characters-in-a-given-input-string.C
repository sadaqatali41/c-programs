#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[26];
	int i,occurance[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	clrscr();
	printf("Enter a string in capital letter:\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			occurance[str[i]-65]++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			occurance[str[i]-97]++;
		}
	}
	printf("String length is:%d\n",strlen(str));
	printf("Input string is: ");
	puts(str);
	printf("\n");
	printf("Occurances of characters are given below:\n");
	for(i=0;i<26;i++)
	{       if(occurance[i] > 0)
			printf("%d%c",occurance[i],(char)(i+65));
	}
	getch();

}