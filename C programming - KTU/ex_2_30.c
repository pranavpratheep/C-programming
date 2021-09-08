/***************************************************
* File           : Exe_2.30
* Description    : C Program to print diamond stars pattern
* Author         : Pranav P
* Version        : 1.0
* Date           : 25/08/2021
* **************************************************/
#include<stdio.h>
int main() 
 {
    int i,j,k,l=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
     {
        l=l+2;
        for(j=i;j<num;j++)
         {
            printf(" ");
         }
        for(k=2;k<l;k++)
         {
            printf("*");
         }
        printf("\n");
     }

    for(i=1;i<=num;i++)
     {
        l=l-2;
        for(j=1;j<=i;j++)
         {
            printf(" ");
         }
        for(k=2;k<l;k++)
         {
            printf("*");
         }
        printf("\n");
     }
    return 0;
}