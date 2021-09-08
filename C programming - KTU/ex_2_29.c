/***************************************************
* File           : Exe_2.29
* Description    : C Program to check whether the given number is perfect or not
* Author         : Pranav P
* Version        : 1.0
* Date           : 25/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int number,sum=0,i;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    for(i=1;i<number;i++)
     {
        if(number%i==0)
         {
            sum=sum+i;
         }
     }
    if(sum==number)
     {
        printf("%d is a perfect number",number);
     }
    else
     {
        printf("%d is not a perfect number",number);
     }
    return 0;
 }