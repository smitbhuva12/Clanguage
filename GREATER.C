#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;

	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	if(a>b && a>c  )

	{
	printf("a is biggest number");

	}
	 else if(b>c && b>a){
		printf("b is biggest number");
	}
	else
	{
		printf("c is biggest number");
	}
	getch();
}