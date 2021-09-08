/***************************************************
* File           : Exe_2.38
* Description    : C Program to find the amount of money given
* Author         : Pranav P
* Version        : 1.0
* Date           : 26/08/2021
* **************************************************/
#include<stdio.h>
int main()
 {
    int num,guess,tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    printf("\n Guess my number game \n");

    do
     {
        printf("\n Enter a number between 1 and 100 :");
        scanf("%d",&guess);
        tries++;

        if (guess > num)
         {
            printf("Too high!\n");
         }
        else if (guess < num)
         {
            printf("Too low!\n");
         } 
        else
         {
            printf("\nCorrect! You got it in %d guess! \n",tries);
         }       

     }while (guess != num);
   
      return 0;
 }