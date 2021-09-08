/***************************************************
* File           : Exe_2.28
* Description    : C Program to find HCF and LCM of two numbers
* Author         : Pranav P
* Version        : 1.0
* Date           : 25/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int Firstnumber,Secondnumber,HCF,LCM,i;
    printf("Enter the first number: ");
    scanf("%d",&Firstnumber);
    printf("Enter the second number: ");
    scanf("%d",&Secondnumber);

    for(i=1;i<=Firstnumber;i++)
     {
        if(Firstnumber%i==0 && Secondnumber%i==0)
         {
            HCF=i;
         }
     }
    LCM = (Firstnumber*Secondnumber)/HCF;    
    printf("The HCF of %d and %d is %d",Firstnumber,Secondnumber,HCF);
    printf("\nThe LCM of %d and %d is %d",Firstnumber,Secondnumber,LCM);
    return 0;
}