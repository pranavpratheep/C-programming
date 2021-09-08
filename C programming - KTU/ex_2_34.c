/***************************************************
* File           : Exe_2.34
* Description    : C Program to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
* Author         : Pranav P
* Version        : 1.0
* Date           : 26/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int num,term=1,sum=1,i;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    
    for (i=1;i<num;i++)
     {  
        term=(term*10)+1;       
        sum=sum+term;   
     }
    printf("The sum of %d terms of the series is: %d",num,sum);
    return 0;
 }