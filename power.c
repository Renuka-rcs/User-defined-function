/*C program to find power of a number using loops*/

#include<stdio.h>
int main()
{
   int base, exponent;
   long int result = 1;
   printf("Enter the base value : ");
   scanf("%d", &base);
   printf("Enter the exponent value : ");
   scanf("%d", &exponent);
   while(exponent != 0)
    {
      result = result * base;
      --exponent;
    }
   printf("Resultant value : %d\n", result);
   return 0;
}
