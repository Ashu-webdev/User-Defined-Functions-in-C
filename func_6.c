/* To find gcd of two nos using recursion*/
#include<stdio.h>
int GCD(int);
int main()
{
   int num1,num2,dividend,divisor,gcd;
   printf("Enter two nos:");
   scanf("%d%d",&num1,&num2);
   if (num1>num2)
   {
     dividend=num1;
     divisor=num2;
   }
   else
   {
	dividend=num2;
        divisor=num1;
   }
   gcd=GCD(dividend);
   printf("\nGCD result=%d",dividend);
}

int GCD(int Dividend)
{
   int rem,dividend,divisor;
   rem=dividend%divisor;
   dividend=divisor;
   divisor=rem;
   return dividend;
}
