/******************************************************************
 * File        -  2.3
 * Description -  Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote
 * Author      -  Pranav P
 * Version     -  0.1
 * Date        -  21/06/2021
******************************************************************/
#include<stdio.h>
int main()
 {
      int age;
      printf("enter the age -");
      scanf("%d",&age);

      if(age>=18)
        printf("congratulation! Your are eligible for casting your vote");
      else
        printf("you are not eligible to cast your vote");

        return 0;  
 }
