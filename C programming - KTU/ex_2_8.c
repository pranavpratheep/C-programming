/***********************************************************************
* File    - Exe_2.8
* Program - C program to check whether leap year or not 
* Author  - Pranav P
* Version - 1.0
* Date    - 22/06/2021 
************************************************************************/
#include<stdio.h>
int main()
  {

    int year;
    printf("Enter the year-- ");
    scanf("%d",&year);

     if(year % 4 == 0)
     if(year % 100 == 0)
     if(year % 400 == 0)
       {
          printf("\nleap year");
       } 
      else
        {
            printf("\nnot a leap year");
        }
      else
       {
           printf("leap year");
       }
      else
       {
           printf("not a leap year");
       }
  
  }

