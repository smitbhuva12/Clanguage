#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float side,area;
	printf("Enter side of area: \n");
	scanf("%f",&side);
	area=side*side;
	printf("Area of Square is %.2f\n",area);
	getch();
}