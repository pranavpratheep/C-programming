/****************************************************************************
* File    - Exe_2.5
* Program - eligibility  
* Author  - Pranav P
* Version - 1.0
* Date    - 21/06/2021 
Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Eligibility Criteria: Marks in Maths >=65 and Marks in Physics >=55 and Marks in Chemistry>=50
 and Total in all three subject >=190 or Total in Maths and Physics>=140
*****************************************************************************/
#include<stdio.h>
int main()
{
     float maths,physics,chemistry,total;
     
     printf("Enter the mark of maths -");
     scanf("%f",&maths);
     
     printf("\nEnter the mark of physics -");
     scanf("%f",&physics);
     
     printf("\nEnter the marks of chemistry -");
     scanf("%f",&chemistry);

     total = maths + physics + chemistry;

     if((maths >= 65 && physics >=55 && chemistry >=50 && total >=190 ) || maths + physics + chemistry >=140)
       {
           printf("\n Congratualations you are eligible...");

       }
     else
       {
           printf("\nYou are not eligible!!");

       }

}

      