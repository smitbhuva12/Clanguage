#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a: \n");
scanf("%d",&a);
printf("Enter the value of b: \n");
scanf("%d",&b);

c=a;
a=b;
b=c;

printf("after swapping a and b is %d and %d ",a,b);
getch();
}