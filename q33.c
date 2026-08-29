//Q33: Write a program to check if a number is an Armstrong number.//

#include<stdio.h>
#include<math.h>

int main() {
    int num, originalNum, sum = 0, remainder;
    int digits;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    digits = log10(num) + 1; 

    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }

    if (originalNum == sum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
