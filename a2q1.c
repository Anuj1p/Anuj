/*question no. 1*/
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
printf("the sides of a triangle");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of triangle is%f",area);





}	
