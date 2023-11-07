#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t;
	clrscr();

	printf("Enter the value of X and Y : \n");
	scanf("%d %d",&i,&j);

	t= (i*i)+(2*i*j)+(i*j);

	printf("After apling Formula (X+Y)2 :  %d",t);

	getch();
}