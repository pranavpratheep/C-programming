/**********************************************************************
* File    - Exe_2.19 
* Program - C Program to check Whether a Character is Vowel or Consonant  
* Author  - Pranav P
* Version - 1.0
* Date    - 25/06/2021
************************************************************************/
#include<stdio.h>
int main()
  
  {
      char c;
      printf("\nEnter the character :");
      scanf("%c",&c);

      switch (c)
        {
          
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
         
          printf("\nVowel");
          break;

          default:
          printf("\nconsonant");
          break;
        }               
       
         return 0;

  }
