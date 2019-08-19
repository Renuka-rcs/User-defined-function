#include <stdio.h>
/*Function Declaration*/
int Prime(int);
 /*Main Progran*/
int main()
{
    int number;
    printf("Enter an integer number : ");
    scanf("%d",&number);
     if(Prime(number))
        printf("%d is a prime number.",number);
    else
        printf("%d is not a prime number.",number);
     return 0;
}
/*function to check number is Prime or Not*/
int Prime(int num)
{
    int temp=0;
    int a;
     
    for(a=2;a<=(num/2);a++)
    {
        if(num%a==0)
        {
            temp=1;
            break;
        }
    }
      if(temp==0)
          return 1; /*prime number*/
      else
          return 0; /*not a prime number*/
}

