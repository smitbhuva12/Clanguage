#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();

	printf("\t\t\t\t Bill with GST \n");
	printf("Enter Your Amount : \n");
	scanf("%d",&n);
	a= (n*18)/100;
	n= n+a;
	printf("Your Bill After GST : %d",n);



       getch();
}