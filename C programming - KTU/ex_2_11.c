/***********************************************************************
* File    - Exe_2.11
* Program - shape? 
* Author  - Pranav P
* Version - 1.0
* Date    - 23/06/2021 
Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene
Hint : Equilateral triangle: All three sides are equal.
       Isosceles triangle: All two sides are equal.
       Scalene triangle: No sides are equal.
**********************************************************************/
#include<stdio.h>
int main()
 {
     int side1,side2,side3;
     printf("\n Enter the 3 sides of the trinagle :");
     scanf("%d%d%d",&side1,&side2,&side3);

     (side1 == side2 && side1 == side3) ? (printf("\n the tringle is equilateral"))
          : (side2 == side3 || side1 == side3 || side1 == side2) ? (printf("\nTriangle is Isoceles"))
          : (printf("\nTriangle is Scalene"));

     return 0;      
 }