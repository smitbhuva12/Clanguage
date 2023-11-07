#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	float s,area;

	clrscr();
	printf("Enter sides of Triangle :  \n");
	scanf("%f%f%f", &a,&b,&c) ;

	s= (a+b+c)/2;
	area= ((s*(s-a)*(s-b)*(s-c)));

	printf("Area of triangle with side %.2f , %.2f and %.2f is : %.2ffff",a,b,c,area);
	getch();

}