#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();

    printf("Enter the value of a: \n");
    scanf("%d",&a);
    printf("Enter the value of b: \n");
    scanf("%d",&b);

     a=a+b;
     b=a-b ;
     a=a-b;

     printf("after swap the value of a and b is %d and %d",a,b);
     getch();
     }