/*Write a program to classify a triangle as
 Equilateral, Isosceles, or Scalene based on its side lengths.*/

 #include<stdio.h>
 int main(){int a,b,c;
printf("enter 3 sides of the triangle");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
    printf("The triangle is equilateral.");
else if(a==b || b==c || a==c)
    printf("The triangle is isosceles.");
else
    printf("The triangle is scalene.");
return 0;
}