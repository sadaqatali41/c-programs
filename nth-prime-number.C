#include<stdio.h>
#include<conio.h>
void main()
{
	int number,count=0,i=2,j;
	clrscr();
	printf("Enter prime number range:\n");
	scanf("%d",&number);
	while(number)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
		{
			printf("%d ",i);
			count++;
		}
		i++;
		if(count==number)
			break;
	}
	getch();
}