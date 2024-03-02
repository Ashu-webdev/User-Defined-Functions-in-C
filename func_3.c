/* To find largest among 3 nos using function*/
#include<stdio.h>
int largest(int,int,int);
int main()
{
   int num1,num2,num3,large;
   printf("Enter three nos:");
   scanf("%d%d%d",&num1,&num2,&num3);
   large=largest(num1,num2,num3);
   printf("largest no=%d",large);
}

int largest(int a,int b,int c)
{
	  if(a>b && a>c)
		  return a;
	  else
	  {
	    if(b>c)
	      return b;
            else
	        return c;
         }
}	  
