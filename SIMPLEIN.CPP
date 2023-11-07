#include<stdio.h>
#include<conio.h>
void main()
{
  float p ,r,t ;
  float simpleinterest;
  clrscr();

  printf("Enter the Amount\n : ");
  scanf("%f",&p);
  printf("Enter Rate in Percentage\n: ");
  scanf("%f",&r);
  printf("Enter time in years\n: ");
  scanf("%f",&t);

  simpleinterest= (p*r*t)/100;
  printf("Simple Interest of your Amount is %.3f",simpleinterest);

  getch();
}
