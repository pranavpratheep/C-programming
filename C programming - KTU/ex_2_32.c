/***************************************************
* File           : Exe_2.32
* Description    : C Program to print Solid Half Diamond pattern printing using stars
* Author         : Pranav P
* Version        : 1.0
* Date           : 26/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int i,j,num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    
    for (i=1;i<=num;i++)
     {    
        for (j=1;j<=i;j++)
         {
            printf("* ");
         }
        printf("\n");
     }
    for (i=1;i<=num;i++)
     {    
        for (j=i;j<num;j++)
         {
            printf("* ");
         }
        printf("\n");
     }
    return 0;
}    