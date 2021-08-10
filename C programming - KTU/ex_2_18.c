/***********************************************************************
* File    - Exe_2.17
* Program - accept a grade  
* Author  - Pranav P
* Version - 1.0
* Date    - 25/06/2021
Write a program in C to accept a grade and declare the equivalent description
Grade          Description
 E               Excellent
 V               Very Good
 G               Good
 A               Average
 F               Fail
************************************************************************/
#include<stdio.h>
int main()
 {
    char grade;
    printf("\nEnter the grade :");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'E': printf("\nExcellent");
              break;
    
    case 'V': printf("\nVery Good");
              break;

    case 'G': printf("\nGood");
              break;

    case 'A': printf("\nAverage");
              break;

    case 'F': printf("\nFail");
              break;

    default:  printf("\nInvalid operation!!");
              break;
    }
    return 0;
 
 }