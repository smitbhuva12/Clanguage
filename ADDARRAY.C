#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j , rows, col;
	printf("Enter number of rows:\n ");
	scanf("%d",&rows) ;
	printf("Enter number of col: \n");
	scanf("%d",&col);

	int a1[rows][col], a2[rows][col], add[rows][col];
	printf("Enter matrix 1\n : ");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a1[i][j]);
	}
	}
	printf("Enter matrix 2\n : ");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<col;j++)
	{
		scanf("%d",&a2[i][j]);
	}
	}
	for(i=0;i<rows; i++)
	getch();


}