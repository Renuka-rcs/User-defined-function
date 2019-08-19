#include<stdio.h>
/*Function Declaration*/
int Armstrong(int);
/*main Program*/
int main()
{
  int number;
  
  printf("Enter an integer number: ");
  scanf("%d", &number);
  
    if(Armstrong(number))
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
  
  return 0;
}
/*function to check Armstrong Number*/
int Armstrong(int num)
{
    int tempNumber=num;
    int rem,sum;

    /*sum of digit's cube*/
    sum=0;
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + (rem*rem*rem);
        tempNumber/=10;
    }

    if(sum==num)
        return 1;   /*Armstrong Number*/
    else
        return 0;   /*Not an Armstrong Number*/
}
