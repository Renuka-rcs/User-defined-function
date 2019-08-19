/*C program to check whether a given character is upper case, lower case, number or special character*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the chracter or symbol which u want to print in upper/lower/number/symbol case\n");
    scanf("%c",&ch);
    if(ch >= 65 && ch <= 90)
    {
      printf("Upper Case\n");
    }
    else if(ch >= 97 && ch <= 122)
    {
      printf("Lower Case\n");
    }
    else if(ch >= 48 && ch <= 57)
    {
       printf("Number\n");
    }
    else
    {
       printf("Symbol\n");
    }
return 0;
}
