/***********************************************************************
* File    - Exe_2.35
* Program - C program to print floyds traingle 
* Author  - Pranav P
* Version - 1.0
* Date    - 11/08/2021 
************************************************************************/
#include<stdio.h>
int main()
 {
    int i,j,rows,n=1;
    printf("\nEnter the number of rows :-");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
     {
         for(j=1;j<=i;j++)
          {
              printf("%d",n);
              n++;
          }
     printf("\n");     
     }
     return 0;
 }