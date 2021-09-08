/***************************************************
* File           : Exe_2.22
* Description    : C Program to print the pattern
                        1
                       121
                      12321
* Author         : Pranav P
* Version        : 1.0
* Date           : 25/08/2021
* **************************************************/

#include <stdio.h>

int main() 
 {
  int rows,i,j,k;
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
 
  for(i=1;i<=rows;i++)
   {
   
    for(k=rows;k>=i;k--)
     { 
      printf(" ");
     }
    
    for(j=1;j<=i;j++)
     {
       printf("%d",j);
     }
     
    for(j=i-1;j>=1;j--)
       {
	       printf("%d",j);
       }
    printf("\n");
   }
  return 0;
}