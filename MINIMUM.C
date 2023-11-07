#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,c,min;
clrscr();

	printf("Enter any three value : ");
	scanf("%d %d %d", &a,&b,&c);

	if(a<b && a<c)
	{
		min=a;
	}
	else if(b<c)
	{
		min=b ;
	}
	else
	{
		min=c;
	}
	printf("minimum value is %d", min);
	getch();
	}
