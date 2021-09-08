/***********************************************************************
* File    - Exe_2.23
* Program - prime numbers in  range
* Author  - Pranav P
* Version - 1.0
* Date    - 23/08/2021 
Write a program in C to find the prime numbers within a range of numbers.
Test Data :
Input starting number of range: 1
Input ending number of range : 50
Expected Output :
The prime number between 1 and 50 are :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
**********************************************************************/
#include<stdio.h>
int main()
 {
     int i,j,lowerlimit,upperlimit,f=0;
     printf("\n Enter the starting limit :");
     scanf("%d",&lowerlimit);
     printf("\n Enter the ending limit :");
     scanf("%d",&upperlimit);

     if(lowerlimit == 1)
      {
          lowerlimit =  lowerlimit + 1;
      } 

     for(i=lowerlimit;i<=upperlimit;i++)
      {
        for(j=1;j<=i/2;j++)
         {
             if(i%j == 0)
              {
                  f = f+1;
              }
         }
     if(f == 1)
      {
          printf("%d ",i);
      }
     f = 0;     
      } 
     return 0; 
 } 

