/***********************************************************************
* File    - Exe_2.15
* Program - read any day in integer  
* Author  - Pranav P
* Version - 1.0
* Date    - 25/06/2021
Write a program in C to read any day in integer number and display day name in
the word.
Test Data : 4
Expected Output : Thursday
************************************************************************/
#include<stdio.h>
int main()
 {
     int day;
     printf("\nEnter the day number :");
     scanf("%d",&day);

     switch (day)
     {
     case 1: printf("\nMonday");
             break;
     
     case 2: printf("\nTuesday");
             break;
     
     case 3: printf("\nWednesday");
             break;
     
     case 4: printf("\nThursday");
             break;
     
     case 5: printf("\nFriday");
             break;
     
     case 6: printf("\nSaturday");
             break;
     
     case 7: printf("\nSunday");
             break;                                                             
     
     default: printf("\n ENTER A VALID DAY NUMBER!!");
              break;
     }
     
     return 0;
 }