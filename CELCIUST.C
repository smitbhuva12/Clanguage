#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
float celcius,feranheat;
	clrscr();
	printf("Enter value in celcius to convert in feranheat: \n");
	scanf("%f",&celcius);
	feranheat=(celcius*1.8)+32;
	printf("celcius to feranheat is :%.2f",feranheat);
	getch();

}