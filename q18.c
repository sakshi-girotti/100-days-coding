/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include<stdio.h>
int main()
{int marks;
    printf("Enter your percentage marks: ");
    scanf("%d",&marks);
    switch(marks)
    {
        case (marks >= 90 && marks <= 100):
            printf("Grade A");
            break;
        case (marks >= 80 && marks <= 89):
            printf("Grade B");
            break;
        case (marks >= 70 && marks <= 79):
            printf("Grade C");
            break;
        case (marks >= 60 && marks <= 69):
            printf("Grade D");
            break;
        default:
            printf("Grade F");
    }
    return 0;
}
