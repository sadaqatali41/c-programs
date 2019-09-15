#include<stdio.h>
#include<conio.h>

void main()
{
	int number,i,j,flag=1;
	clrscr();
	printf("Enter a Number:\n");
	scanf("%d",&number);
	printf("********  The Prime Numbers are  ************\n");
	for(i=1;i<number;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
		{
			if(flag%2!=0)
			{
				printf("%d\n",i);
			}
			flag++;
		}
		// for single number, to check prime number
		/*
		if(i%2!=0 && i%3!=0 && i%5!=0 )
		{
		     if(flag%2!=0)
		     {
			printf("%d\n",i);
		     }
		     flag++;
		}
		*/
	}
	getch();
}