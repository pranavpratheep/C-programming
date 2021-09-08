/***************************************************
* File           : Exe_2.27
* Description    : C Program to convert a decimal number into octal number
* Author         : Pranav P
* Version        : 1.0
* Date           : 25/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int Decimal,num,Remainder,Octal=0,multiplier=1;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    Decimal=num;
    
    while(num>=1)
     {
        Remainder= num%8;
        Octal = Octal+(Remainder*multiplier);
        num=num/8;
        multiplier= multiplier*10;
     }
    printf("The octal number of %d is %d",Decimal,Octal);
    return 0;
}