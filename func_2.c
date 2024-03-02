/* To find x**n using function where x and n will be inputed*/
#include<stdio.h>
int val(int,int);
int main()
{
   int x,n,pow;
   printf("Enter base and power:");
   scanf("%d%d",&x,&n);
   pow=val(x,n);
   printf("Value=%d",pow);
}

int val(int a,int b)
{
   int num=1,power;
   while(b)
   {
     num=num*a;
     b--;
   }
   power=num;
   return (power);
}   
