/***********************************************************************
* File    - Exe_2.10
* Program - youngest of all 
* Author  - Pranav P
* Version - 1.0
* Date    - 22/06/2021 
If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program 
to determine the youngest of the three
************************************************************************/
#include<stdio.h>
int main()
 {
    int Ram,Shyam,Ajay;
    
    printf("Enter the age of Ram :");
    scanf("%d",&Ram);

    printf("\nEnter the age of Shyam :");
    scanf("%d",&Shyam);

    printf("\nEnter the age of Ajay :");
    scanf("%d",&Ajay);

    if(Ram < Shyam && Ram < Ajay)
       {
           printf("\nthe youngest of 3 is ram :");
       }
    else if(Shyam < Ram && Shyam <Ajay)
        {
           printf("\nthe youngest of 3 is shyam :");

        } 
    else if(Ajay < Ram && Ajay < Shyam)
        {
            printf("\n the youngest of 3 is ajay :");

        }
    else 
        {
            printf("\nsame age");
        }          
      

 }