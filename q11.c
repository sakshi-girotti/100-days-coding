//Q11: Write a program to input an integer and check whether it is even or odd using if–else.//
#include<stdio.h>
int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a%2==0){printf("the integer is even");}
    else{printf("the integer is odd");}
    return 0;
}
