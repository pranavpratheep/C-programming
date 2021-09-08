/***************************************************
* File           : Exe_2.31
* Description    : C Program to print hollow diamond stars pattern
* Author         : Pranav P
* Version        : 1.0
* Date           : 25/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    
    int i,j,k,l=1,num;
    printf("\n Enter a number :");
    scanf("%d",&num);
   
    for (i=1;i<=num;i++)
     {         
        l=l+2;
        for (j=i;j<num;j++)
         {     
            printf(" ");
         }
        printf("*");               
        for (k=4;k<l;k++)
         {        
            printf(" ");
         }
        if (i>1)
         {
            printf("*");
         }
        printf("\n");
     }
    for (i=num;i>=1;i--)
     {       
        for (j=num;j>i;j--)
         {    
            printf(" ");
         }
        printf("*");
        for (k=3;k<2*i;k++)
         {     
            printf(" ");
         }
        if (i!=1)
         {
            printf("*\n");
         }
     }


    return 0;
}