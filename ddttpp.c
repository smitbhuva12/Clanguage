#include <stdio.h>  
   
void main()  {  
    int a, b, c, max;  
  
    printf("Enter Three Integers\n");  
    scanf("%d %d %d", &a, &b, &c);  
     
    max = (a > b)?((a > c)?a:c):((b > c)?b:c);
   
    /* Print Maximum Number */ 
    printf("Maximum Number is = %d\n", max);  
   
    getch();  
}