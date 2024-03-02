/* To test whether a number is prime/composite using function*/
#include<stdio.h>
int checkprime(int);
int main()
{
   int num,res;
   printf("Enter a no:");
   scanf("%d",&num);
   res=checkprime(num);
   if (res==1)
     printf("%d is a Prime no",num);
   else
     printf("%d is not a Prime no",num);	    
}

int checkprime(int n)
{
   int index,cf=0;
   for  (index=1;index<=n;index++)
   {
     if(n%index==0)
       cf++;
     if (cf>2)
	break;
   }
   if (cf==2)
	return 1;
   else
	return 0;
}   
