/***********************************************************************
* File    - Exe_2.6
* Program - C PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS ODD OR EVEN
* Author  - Pranav P
* Version - 1.0
* Date    - 22/06/2021 
************************************************************************/
#include<stdio.h>
int main()
 {
    
    int num;
     printf("Enter the  number :- ");
     scanf("%d" , &num);

      if(num%2 == 0)
         printf("%d is even" , num);

      else 
         printf("%d is odd" , num);   

         return 0;

 }