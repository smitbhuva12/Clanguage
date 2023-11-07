#include<stdio.h>
#include<conio.h>
void main()
{
     float r,perimeter;
     const pi=3.14;
     clrscr();

     printf("Enter the radius of Circle : \n");
     scanf("%f",&r) ;

     perimeter= 2*pi*r;
     printf("Perimeter of this Circle is %.2f ",perimeter) ;
     getch();

}