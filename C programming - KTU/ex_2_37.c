/***************************************************
* File           : Exe_2.37
* Description    : C Program to find the amount of money given
* Author         : Pranav P
* Version        : 1.0
* Date           : 26/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int Amount,i;
    printf("Enter the amount given on Day 1: ");
    scanf("%d",&Amount);
    
    for(i=1;i<15;i++)
     {
        Amount=Amount*2;
     }
    printf("The amount given on Day 15 is:\n%d",Amount);
    return 0;
 }