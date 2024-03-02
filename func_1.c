/* To find out area of circle using function*/
#include<stdio.h>
float area(float);
int main()
{
   float rad,circle_area;
   printf("Enter radius:");
   scanf("%f",&rad);
   circle_area=area(rad);
   printf("Area=%f\n",circle_area);
}

float area(float r)
{
   float cir_area;
   cir_area=3.141*r*r;
   return (cir_area);
}   
