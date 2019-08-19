/*C program to check whether a number is an abundant number or not*/

#include<stdio.h>
int main()
{
    int num;
    int temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    int sum = 0;
    for(int i = 1; i < num; i++)
      {
          if(num % i == 0)
            {
              sum = sum + i;
             }
      }
    if(num < sum)
     printf("Abundant Number\n");
   else
     printf("Not Abundant Number\n");
return 0;
}
