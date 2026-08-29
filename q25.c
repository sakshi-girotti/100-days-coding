//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.//
#include<stdio.h>
int main()
{ 
    int a,b;
    printf("enter 2 digits along ith operation");
scanf("%d,%d",&a,&b);

    char op;
    printf("enter the operation you want to perform (+, -, *, /, %): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if(b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
