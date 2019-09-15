#include<stdarg.h>
#include<string.h>
#include <stdio.h>
#include<conio.h>

void print_row( int cols,... )
{
    int i,val=99999,values[5],j,k;
    va_list arguments;

    va_start( arguments, cols );

    for(j = 0; j < cols; j++)
    {
	values[j] = va_arg( arguments, int );
    }

    for( i = 0; i < 5; i++ )
    {
	for(k = 0; k < cols; k++)
	{
		if(values[k]==i)
		{
			val = values[k];
			break;
		}
	}
	if(i == val)
		printf("* ");
	else
		printf("  ");
    }
    printf("\n");
    //memset(values,0.0,sizeof(values));
    va_end(argements);
}
void A()
{
    print_row(3,1,2,3);
    print_row(2,0,4);
    print_row(2,0,4);
    print_row(5,0,1,2,3,4);
    print_row(2,0,4);
    print_row(2,0,4);
    print_row(2,0,4);
}

void B()
{
    print_row(4,0,1,2,3);
    print_row(2,0,4);
    print_row(2,0,4);
    print_row(4,0,1,2,3);
    print_row(2,0,4);
    print_row(2,0,4);
    print_row(4,0,1,2,3);
}
void C()
{
	// C
	print_row(3,1,2,3);
	print_row(2,0,4);
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
	print_row(2,0,4);
	print_row(3,1,2,3);
}

void D()
{
	// D
	print_row(4,0,1,2,3);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(4,0,1,2,3);
}

void E()
{
	// E
	print_row(5,0,1,2,3,4);
	print_row(1,0);
	print_row(1,0);
	print_row(5,0,1,2,3,4);
	print_row(1,0);
	print_row(1,0);
	print_row(5,0,1,2,3,4);
}

void F()
{
	// F
	print_row(5,0,1,2,3,4);
	print_row(1,0);
	print_row(1,0);
	print_row(4,0,1,2,3);
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
}

void G()
{
	// G
	print_row(3,1,2,3);
	print_row(2,0,4);
	print_row(1,0);
	print_row(3,0,3,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(3,1,2,3);
}

void H()
{
	// H
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(5,0,1,2,3,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
}

void I()
{
	// I
	print_row(5,0,1,2,3,4);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(5,0,1,2,3,4);
}

void J()
{
	// J
	print_row(5,0,1,2,3,4);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(2,0,2);
	print_row(2,0,2);
	print_row(1,1);
}

void K()
{
	// K
	print_row(2,0,4);
	print_row(2,0,3);
	print_row(2,0,2);
	print_row(3,0,1);
	print_row(2,0,2);
	print_row(2,0,3);
	print_row(2,0,4);
}

void L()
{
	// L
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
	print_row(5,0,1,2,3,4);
}

void M()
{
	// M
	print_row(2,0,4);
	print_row(4,0,1,3,4);
	print_row(3,0,2,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
}

void N()
{
	// N
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(3,0,1,4);
	print_row(3,0,2,4);
	print_row(3,0,3,4);
	print_row(2,0,4);
	print_row(2,0,4);
}

void O()
{
	// O
	print_row(3,1,2,3);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(3,1,2,3);
}

void P()
{
	// P
	print_row(4,0,1,2,3);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(4,0,1,2,3);
	print_row(1,0);
	print_row(1,0);
	print_row(1,0);
}

void Q()
{
	// Q
	print_row(3,1,2,3);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(3,0,2,4);
	print_row(3,0,3,4);
	print_row(3,1,2,3);
}

void R()
{
	// R
	print_row(4,0,1,2,3);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(4,0,1,2,3);
	print_row(2,0,2);
	print_row(2,0,3);
	print_row(2,0,4);
}

void S()
{
	// S
	print_row(3,1,2,3);
	print_row(2,0,4);
	print_row(1,1);
	print_row(1,2);
	print_row(1,3);
	print_row(2,0,4);
	print_row(3,1,2,3);
}

void T()
{
	// T
	print_row(5,0,1,2,3,4);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
}

void U()
{
	// U
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(3,1,2,3);
}

void V()
{
	// V
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,1,3);
	print_row(1,2);
}

void W()
{
	// W
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(3,0,2,4);
	print_row(4,0,1,3,4);
	print_row(2,0,4);
}

void X()
{
	// X
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,1,3);
	print_row(1,2);
	print_row(2,1,3);
	print_row(2,0,4);
	print_row(2,0,4);
}

void Y()
{
	// Y
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,0,4);
	print_row(2,1,3);
	print_row(1,2);
	print_row(1,2);
	print_row(1,2);
}

void Z()
{
	// Z
	print_row(5,0,1,2,3,4);
	print_row(2,0,4);
	print_row(1,3);
	print_row(1,2);
	print_row(1,1);
	print_row(2,0,4);
	print_row(5,0,1,2,3,4);
}

void main()
{
    char str[10];
    int i;
    clrscr();
    printf("\n");
    printf("Enter a Word:\n");
    gets(str);
    for(i = 0; i <= strlen(str); i++)
    {
	switch(toupper(str[i]))
	{
		case 'A':
			A();
			printf("\n");
			break;
		case 'B':
			B();
			printf("\n");
			break;
		case 'C':
			C();
			printf("\n");
			break;
		case 'D':
			D();
			printf("\n");
			break;
		case 'E':
			E();
			printf("\n");
			break;
		case 'F':
			F();
			printf("\n");
			break;
		case 'G':
			G();
			printf("\n");
			break;
		case 'H':
			H();
			printf("\n");
			break;
		case 'I':
			I();
			printf("\n");
			break;
		case 'J':
			J();
			printf("\n");
			break;
		case 'K':
			K();
			printf("\n");
			break;
		case 'L':
			L();
			printf("\n");
			break;
		case 'M':
			M();
			printf("\n");
			break;
		case 'N':
			N();
			printf("\n");
			break;
		case 'O':
			O();
			printf("\n");
			break;
		case 'P':
			P();
			printf("\n");
			break;
		case 'Q':
			Q();
			printf("\n");
			break;
		case 'R':
			R();
			printf("\n");
			break;
		case 'S':
			S();
			printf("\n");
			break;
		case 'T':
			T();
			printf("\n");
			break;
		case 'U':
			U();
			printf("\n");
			break;
		case 'V':
			V();
			printf("\n");
			break;
		case 'W':
			W();
			printf("\n");
			break;
		case 'X':
			X();
			printf("\n");
			break;
		case 'Y':
			Y();
			printf("\n");
			break;
		case 'Z':
			Z();
			printf("\n");
			break;
	 }
    }
    getch();
}