#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t, interest;
	clrscr();
	printf("Enter Principal:  \n");
	scanf("%f",&p);
	printf("Enter rate in Percentage : \n");
	scanf("%f",&r);
	printf("Enter Time in years(decimals): \n");
	scanf("%f",&t);

	interest=(p*r*t)/100;
	printf("Simple Interest is %.2f \n ", interest);
	getch();


}