#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,t;
	clrscr();

	printf("Enter the value of X ,Y and Z : \n");
	scanf("%d %d %d",&i,&j,&k);

	t= (i*i*i)+(j*j*j)+(k*k*k)+(3*i*i*j)+(3*i*j*j)+(3*i*i*k)+(3*k*k*i)+(3*j*j*i)+(3*k*k*j)+(6*i*j*k);

	printf("After apling Formula (X+Y+Z)3 :  %d",t);

	getch();
}