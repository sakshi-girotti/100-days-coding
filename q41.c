//Q41: Write a program to swap the first and last digit of a number.//
#include<stdio.h>
int main()
{
    int num, firstDigit, lastDigit, middlePart, swappedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10; 
    firstDigit = num; 
    
    
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    
    
    middlePart = (num / 10) % (int)pow(10, (int)log10(num)); 
    
    
    swappedNum = lastDigit * (int)pow(10, (int)log10(num)) + middlePart * 10 + firstDigit;
    
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    
    return 0;
}