#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
	int n,result;
	clrscr();
	printf("Enter a number:\n");
	scanf("%d",&n);
	result = fact(n);
	printf("Factorial of %d is: %d\n",n,result);
	getch();
}
int fact(int x)
{
	int result;
	if(x<=1)
		return 1;
	else
	{
		result = x * fact(x-1);
		return result;
	}
}