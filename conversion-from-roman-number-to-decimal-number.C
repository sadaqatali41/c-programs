#include<stdio.h>
#include<conio.h>
#include<string.h>

int roman(char ch)
{
	int value=0;
	switch(ch)
	{
		case 'I': value=1;break;
		case 'V': value=5;break;
		case 'X': value=10;break;
		case 'L': value=50;break;
		case 'C': value=100;break;
		case 'D': value=500;break;
		case 'M': value=1000;break;
		default : value=-1;break;
	}
	return value;
}
void main()
{
	int i,error=0;
	long int num=0;
	char romanNumber[10];
	clrscr();
	printf("Enter Roman Number: ");
	gets(romanNumber);
	printf("\n");

	for(i=0; i<=strlen(romanNumber)-1; i++)
	{
		if(roman(romanNumber[i]) < 0)
		{
			printf("'%c' is Invalid Character\n",romanNumber[i]);
			error=1;
		}
		if(roman(romanNumber[i]) >= roman(romanNumber[i+1]))
			num = num+roman(romanNumber[i]);
		else
		{
			num = num+(roman(romanNumber[i+1])-roman(romanNumber[i]));
			i++;
		}
	}
	if(error !=1)
		printf("The number is: %ld",num);
	getch();
}