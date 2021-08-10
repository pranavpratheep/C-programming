/***********************************************************************
* File    - Exe_2.13
* Program - Electricity bill 
* Author  - Pranav P
* Version - 1.0
* Date    - 23/06/2021
Write a program in C to calculate and print the Electricity bill of a given customer.
The customer id., name and unit consumed by the user should be taken from the keyboard and display 
the total amount to pay to the customer.
The charges are as follow:

Unit                                Charge/unit

upto 199                               @1.20
200 and above but less than 400        @1.50
400 and above but less than 600        @1.80
600 and above                          @2.00 
************************************************************************/
#include<stdio.h>
int main()
 {
     float unit,customerid,charge;
     char name[20];

     printf("\nEnter the name :");
     scanf("%s",&name);
     printf("\nEnter your customer id :");
     scanf("%f",&customerid);
     printf("\nEnter the unit :");
     scanf("%f",&unit);

     if(unit < 199)
      {
          charge = unit * 1.20;
      }
    else if(unit >200 && unit < 400)
      {
          charge = unit * 1.50;
      }
    else if(unit > 400 && unit < 600)
      {
          charge = unit * 1.80;    
      }
    else 
      {
          charge = unit *2.00;
      }    
     printf("Electricity bill\n\n");
     printf("Name : %s\n", name);
     printf("Customer id : %.0f\n", customerid);
     printf("Total amount to pay : %.3f\n\n", charge);
     
  }

