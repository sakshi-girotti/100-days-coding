//Q17: Write a program to find the roots of a quadratic equation and categorize them.//

#include<stdio.h>
int main()
{ int a,b,c
;
  float d,r1,r2;
  printf("Enter the coefficients a, b and c: ");
  scanf("%d %d %d",&a,&b,&c);
  
  d = b*b - 4*a*c; 
  
  if(d > 0)
  {
      r1 = (-b + sqrt(d)) / (2*a);
      r2 = (-b - sqrt(d)) / (2*a);
      printf("Roots are real and different.\n");
      printf("Root 1 = %.2f\n", r1);
      printf("Root 2 = %.2f\n", r2);
  }
  else if(d == 0)
  {
      r1 = -b / (2*a);
      printf("Roots are real and same.\n");
      printf("Root = %.2f\n", r1);
  }
  else
  {
      float realPart = -b / (2*a);
      float imaginaryPart = sqrt(-d) / (2*a);
      printf("Roots are complex and different.\n");
      printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
      printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
  }
  
  return 0;
}

