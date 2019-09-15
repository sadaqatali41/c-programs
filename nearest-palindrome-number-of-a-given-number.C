#include<stdio.h>
#include<conio.h>

int checkNext(int num)
{
	int next;
	char chr='n';
	next = checkPalin(num,chr);
	return next;
}
int checkPrev(int num)
{
	int prev;
	char chr='p';
	prev = checkPalin(num,chr);
	return prev;
}
int checkPalin(int num,char chr)
{
	int temp,rem,rev;
	while(num)
	{
		rev=0;
		temp = num;
		while(num>0)
		{
			rem = num%10;
			rev = rev*10+rem;
			num = num/10;
		}
		if(temp==rev)
		{
			break;
		}
		if(chr=='n')
			num=temp+1;
		else if(chr=='p')
			num=temp-1;
	}
	return rev;
}
void main()
{
	int num,rev=0,rem,temp,next,prev;
	clrscr();
	printf("Enter a Number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	if(rev==temp)
		printf("%d is already Palindrome number",temp);
	else
	{
		next = checkNext(temp);
		//printf("%d is next palindrome\n",next);
		prev = checkPrev(temp);
		//printf("%d is previous palindrome\n",prev);
		if((next-temp)<(temp-prev))
			printf("%d is closest palindrome number\n",next);
		else if((temp-prev)<(next-temp))
			printf("%d is closest palindrome number\n",prev);
		else
			printf("%d is closest palindrome number\n",prev);
	}
getch();
}