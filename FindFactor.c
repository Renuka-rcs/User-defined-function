/*C program to find factors of a number using loops*/
#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  int i,count = 0;
   printf("The factors of %d are : ",num);
    for(i = 1;i <= num; i++)
      {
        if(num % i == 0)
           {
              ++count;
              printf("%d\t",i);
           }
      }
   printf("\nTotal factors of %d : %d\n",num,count);
 }
