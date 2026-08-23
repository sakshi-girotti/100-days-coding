///Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.//
#include<stdio.h>
int main()
{float principal,rate,time,si,ci;
printf("Enter principal amount, rate and time: ");
scanf("%f %f %f",&principal,&rate,&time);

si=(principal*rate*time)/100;
ci=principal*(pow(1+rate/100,time)-1);

printf("Simple Interest: %f\n",si);
printf("Compound Interest: %f\n",ci);

}
