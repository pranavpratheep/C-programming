/***************************************************
* File           : Exe_2.26
* Description    : C Program to convert a binary number into a decimal number
* Author         : Pranav P
* Version        : 1.0
* Date           : 24/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {

    int binary,remainder,num,decimal=0, multiplier=1;

    printf("\nInput a binary number: "); 
    scanf("%d",&num);
    binary=num;

    while(num>0)
     {
        remainder=num%10;
        decimal=decimal+(remainder*multiplier);
        num=num/10;
        multiplier=multiplier*2;
     }

    printf("\nThe equivalent decimal number: %d",decimal);

    return 0;
}