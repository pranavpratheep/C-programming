/***************************************************
* File           : Exe_2.25
* Description    : C Program to display the cube of the number upto given an integer
* Author         : Pranav P
* Version        : 1.0
* Date           : 24/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    
    int i,input,cube;
    printf("\n Enter a number: ");
    scanf("%d", &input);
    
    for(i=1;i<=input;i++)
     {
        cube=i*i*i;
        printf("The number is:%d and the cube of %d is %d\n",i,i,cube);
     }
    return 0;
 
 }   