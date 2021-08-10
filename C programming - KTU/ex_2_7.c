/***********************************************************************
* File    - Exe_2.7
* Program - Admission eligiblity 
* Author  - Pranav P
* Version - 1.0
* Date    - 22/06/2021
Write a C program to read roll no, name and marks of three subjects and calculate
the total, percentage.
If the percentage of the marks >=75 then print First Class with Distinction
If the percentage of the marks >=60 and <75 print First Class
If the percentage of the marks <60 print Second Class 
************************************************************************/
#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, roll, total, percent;
    char name[20];

    printf("Enter your Name :");
    scanf("%s", name);
    printf("Enter your Roll no :");
    scanf("%d", &roll);
    printf("Enter your Marks for subject 1 :");
    scanf("%d", &sub1);
    printf("Enter your Marks for subject 2 :");
    scanf("%d", &sub2);
    printf("Enter your Marks for subject 3 :");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    percent = (float)total / 300 * 100;

    
    printf("\nReport Card");
    printf("\nStudent Name : %s", name);
    printf("\nRoll no : %d", roll);
    printf("\nTotal marks scored : %d", total);
    printf("\nTotal Percentage :%.0f", (float)percent);
    printf("\nRemarks :");

    
    switch (percent)
    {
    case 0 ... 59:
        printf("Second Class\n");
        break;
    case 60 ... 74:
        printf("First Class\n");
        break;
    case 75 ... 100:
        printf("First Class with Distinction\n");
        break;
    default:
        printf("No grades\n");
        break;
    }
    return 0;

}