/***********************************************************************
* File    - Exe_2.17
* Program - area greater then perimeter  
* Author  - Pranav P
* Version - 1.0
* Date    - 25/06/2021
Given the length and breadth of a rectangle, write a program to find whether the area of the 
rectangle is greater than its perimeter. For example, the area of the rectangle with 
length = 5 and breadth = 4 is greater than its perimeter.
************************************************************************/
#include<stdio.h>
int main()
 {
     int area,length,breadth,perimeter;
     printf("\nEnter the length and breadth of the rectangle :");
     scanf("%d%d",&length,&breadth);

     area = length*breadth;
     printf("\nArea of the rectangle = %d",area);
     
     perimeter = 2*length + breadth;
     printf("\nPerimeter of the rectangle = %d",perimeter);

     if(area > perimeter)
      {
          printf("\nThe length and breadth of the rectangle is greater than its perimeter");
      }
     else
      {
          printf("\nThe area is greater than perimeter!!");
      } 
     
     return 0;
 }