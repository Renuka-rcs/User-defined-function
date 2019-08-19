#include <stdio.h>
#include <math.h>

/*Function Declaration*/
int PerfectSquare(int );
/*Main program*/ 
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
     if(PerfectSquare(num))
        printf("%d is a perfect square.",num);
    else
        printf("%d is not a perfect square.",num);
     return 0;
}
/*function definition*/
int PerfectSquare(int number)
{
    int a;
    float b;
 
    b=sqrt((double)number);
    a=b;
 
    if(a==b)
        return 1;
    else
        return 0;
}
