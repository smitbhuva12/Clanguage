#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,n;
	 clrscr();
	 i=1;
	 printf("Enter n: \n");
	 scanf("%d",&n);
	 while(i<=n)
	 {
		if(i%2==0)
		{
			printf("%d is even\n",i);
		}
		else
		{
			printf("%d is odd\n",i);

		}
		i++;
	 }
	 getch();
	 }