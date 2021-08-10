/******************************************************************
 * File        - 2.4
 * Description - Profit or Loss
 * Author      - Pranav P
 * Version     - 0.1
 * Date        - 21/06/2021
   
If cost price and selling price of an item are input through the keyboard, write a program to determine whether
the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
******************************************************************/ 
#include<stdio.h>
 int main()
  {
     float sellingprice,costprice,percent;
     printf("enter the costprice and sellingprice :"); 
     scanf("%f%f",&costprice,&sellingprice);
     
     percent = (sellingprice - costprice)/costprice * 100; 
     
     if(sellingprice > costprice) 
     { 
        printf("\nThe seller has made profit %f",percent);
     }
     else
     { 
         printf("\nThe seller has incurred loss %f",percent);
     } 
     return 0;
  }
