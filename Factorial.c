#include <stdio.h>
/*Main program*/
int main()
{
   int n;
   printf("Enter the number : ");
   scanf("%d",&n);
   printf("\nFactorial of the number %d is %d",n, factorialnumber(n));
   printf("\n");
   return 0;
}
/*Factorial Function*/
int factorialnumber(int n)
{
   if(n == 0)
      return 1;
   if(n < 0)
   printf("Invalid input\n");
   int fact = 1, i;
   for(i = 1; i <= n; i++)
   {
     fact = fact * i;
   }
   return fact;
}
