/***********************************************************************
* File    - Exe_2.14
* Program - C program to find the absolute value of a number  
* Author  - Pranav P
* Version - 1.0
* Date    - 24/06/2021 
************************************************************************/
#include<stdio.h>
int main()
 {
     int num;
     printf("\nEnter the values of positive or negative :");
     scanf("%d",&num);
     
     printf("\nThe absolute value of %d is %d",num,abs(num));
     return 0; 
 }