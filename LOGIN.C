#include<stdio.h>
#include<conio.h>
void main()
{
int un=1234,ps=1212;
int usern,pass;
clrscr();

	printf("Enter the username : ");
	scanf("%d",  &usern);
	printf("Enter the password: ");
	scanf("%d",&pass) ;
if(usern==un)

	{
	if(pass==ps)
	{
		printf("Login successfully");
	}
	else if(pass!=ps)
	{
		printf("Your password is incorrect") ;
	}
	else if(usern!=un)
	{
		printf("Your username is incorrect");
	}
	else
	{
		printf("invalid user and password");
	}
}
else
{      if(pass==ps)
	printf("Invalid username");
	else
	printf("Username and password are incorrect")  ;
	}

getch();
}
