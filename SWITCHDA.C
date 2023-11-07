#include<stdio.h>
#include<conio.h>
void main()
    {
	char day;
	clrscr();
	printf("\n");
	printf("\n1.Monday(m)");
	printf("\n2.Tuesday(t)");
	printf("\n3.Wednesday(w)");
	printf("\n4.Thursday(d)");
	printf("\n5.Friday(f)");
	printf("\n6.Saturday(p)");
	printf("\n7.Sunday(s)");
	printf("\nEnter a day:");
	scanf("%c",&day);
	switch(day)
	{
	    case 'm':
		printf("Monday");
		break;
	    case 't':
		printf("Tuesday");
		break;
	    case 'w':
		printf("Wednesday");
		break;
	    case 'd':
		printf("Thursday");
		break;
	    case 'f':
		printf("Friday");
		break;
	    case 'p':
		printf("Saturday");
		break;
	    case 's':
		printf("Sunday");
		break;
	    default :
		printf("Invalid Input");
		break;
	}
	getch();
    }