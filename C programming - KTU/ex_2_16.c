/***********************************************************************
* File    - Exe_2.16
* Program - read any month in integer  
* Author  - Pranav P
* Version - 1.0
* Date    - 25/06/2021
Write a program in C to read any Month in integer number and display Month name in the word.
Test Data: 4
Expected Output: April
************************************************************************/
#include<stdio.h>
int main()
 {
     int month;
     printf("\nEnter the month number :");
     scanf("%d",&month);

     switch (month)
     {
     case 1: printf("\nJanuary");
             break;
     
     case 2: printf("\nFebruary");
             break;

     case 3: printf("\nMarch");
             break;

     case 4: printf("\nApril");
             break;

     case 5: printf("\nMay");
             break;

     case 6: printf("\nJune");
             break;

     case 7: printf("\nJuly");
             break;

     case 8: printf("\nAugust");
             break;

     case 9: printf("\nSeptember");
             break;

     case 10: printf("\nOctober");
              break;

     case 11: printf("\nNovemeber");
              break;

     case 12: printf("\nDecember");
              break;          
     
     default: printf("\nENTER A VALID MONTH NUMBER!!");
              break;
     }
 
     return 0;
 }
