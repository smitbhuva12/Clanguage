#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t;
	clrscr();

	printf("Enter the value of X and Y : \n");
	scanf("%d %d",&i,&j);

	t= (i*i*i)-(3*i*i*j)+(3*i*j*j)-(j*j*j);

	printf("After apling Formula (X-Y)3 :  %d",t);

	getch();
}