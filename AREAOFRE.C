#include<stdio.h>
#include<conio.h>
void main()
{
	   float len,breadth,area;
	   clrscr();
	   printf("Enter length and breadth of Rectangle:  \n");
	   scanf("%f %f",&len,&breadth);
	   area= len*breadth;
	   printf("Area of Rectangle is %.2f: ",area);
	   getch();
}
