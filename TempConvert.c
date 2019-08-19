/* C Program to convert temperature from Fahrenheit to Celsius and vice versa.*/
#include <stdio.h>
/*Main Program*/ 
int main()
{
    float fh,cl;
    int choice;
 
    printf("\n1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice 1 or 2 : ");
    scanf("%d",&choice);
 /*Using if and else Condition*/
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f\n",cl);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f\n",fh);
    }
    else
    {
        printf("\nInvalid Choice !!!");
    }
    return 0;
}

