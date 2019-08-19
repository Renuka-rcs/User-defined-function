#include<stdio.h>
//user defined function
int palindrome(int);
//Global Variable
int revNum=0;
/*Main Program*/
int  main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	revNum=palindrome(number);
	if(number==revNum)
		printf("Given number is palindrome Number\n");
	else
		printf("Given number is not palidrome Number\n");
}
int palindrome(int a)
{
	int rem=0,tempNum;
	tempNum=a;        //original number assign to tempNum number
	while(tempNum!=0)
	{
		rem=tempNum%10;
		revNum=revNum*10+rem;
		tempNum/=10;
	}
	return revNum;
}
