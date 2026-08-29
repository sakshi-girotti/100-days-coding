//Q28: Write a program to print the product of even numbers from 1 to n.//
#include<stdio.h>
int main() {    
    
    int n, i;
    long long product = 1; // Use long long to handle large products

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) { // Loop through even numbers
        product *= i; // Multiply the even number to the product
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    
    return 0;
}

