/*C program to check whether a number is a Harshad number or not*/

#include<stdio.h>
int main()
{
    int num;
    int temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    int sum = 0;
    temp = num;
   while(temp)
   {
       sum += temp % 10;
       temp = temp / 10;
   }
  int res = num % sum;
   if(res == 0)
     {
	     printf("Harshad Number\n");
     }
  else
     {
           printf("Not Harshad Number\n");
     }
  return 0;
}
