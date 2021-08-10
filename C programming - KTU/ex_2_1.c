/***********************************************************************
* File    - Exe_2.1
* Program - C PROGRAM TO DEMONSTRATE ARITHMETIC OPERATIONS 
* Author  - Pranav P
* Version - 1.0
* Date    - 21/06/2021 
************************************************************************/

#include<stdio.h>
int main()

{
  
  int a,b;
  char op;
  printf("\nEnter two number a,b,operator: ");
  scanf("%d %d %c",&a,&b,&op);
 
 switch(op)
    {

    case '+': printf("\nSum=%d",a+b);
    break;
    
    case '-': printf("\nDifference=%d",a-b);
    break;
    
    case '*': printf("\nProduct=%d",a*b);
    break;
    
    case '/': printf("\nQuotient=%d",a/b);
    break;
    
    case '%': printf("\nRemainder=%d",a%b);
    break;
    
    default : printf("\n Please enter a valid input");
    break; 
   
   }
     return 0; 
 }
