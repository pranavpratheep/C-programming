/***********************************************************************
* File    - Exe_2.12
* Program - valid traingle? 
* Author  - Pranav P
* Version - 1.0
* Date    - 23/06/2021 
Write a program to check whether a triangle is valid or not, when the three angles of the triangle
are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
************************************************************************/
#include<stdio.h>
int main()
 {
     int angle1,angle2,angle3;
     printf("\nEnter the angles of the triangle :");
     scanf("%d%d%d",&angle1,&angle2,&angle3);

     if(angle1 + angle2 + angle3 == 180)
      {
          printf("\nThe traingle is valid ");
      } 
     else
      {
          printf("\nInvalid triangle");
      }
     return 0;
 }         