/***********************************************************************
* File    - Exe_2.24
* Program - Pascal's triangle
* Author  - Pranav P
* Version - 1.0
* Date    - 24/08/2021 
Write a C program to display Pascal's triangle
**********************************************************************/
#include<stdio.h>
int main()
 {
   int rows,coeff = 1,space,i,j;
   printf("\n Enter the number of rows :");
   scanf("%d",&rows);

   for(i = 0;i < rows;i++)
    {
        for(space = 1;space <= rows - i;space++)
          printf(" ");
        for(j=0;j<=i;j++)
          {
            if(j == 0 || i == 0)
             coeff = 1;
            else
                coeff = coeff*(i - j + 1)/j;
             printf("%4d",coeff);   
                   
          }
     printf("\n");
    }  
    return 0;
 }  