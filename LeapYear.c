/*C program to print all leap years from 1 to N.*/
#include <stdio.h>
 /*Main Program*/
int main()
{
    int i,n;
    printf("Enter the value of N: \n");
    scanf("%d",&n);
    printf("Leap years from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(LeapYear(i))
            printf("%d\t",i);
    }
    printf("\n");
       return 0;
}
//function to check leap year
int LeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;  //leap year
    else
        return 0; //not leap year
}
