#include<stdio.h>
#define MAX 20
/*Main program*/
int main() 
{ 
    int arr[MAX]; 
    int n,item,pos; 
    printf("Enter size of an Array :"); 
    scanf("%d",&n); 
    printf("\nEnter elements of Array 1:\n"); 
    readArray(arr,n);  
    printf("Enter an item to find :"); 
    scanf("%d",&item); 
    pos=findElement(arr,n,item); 
    if(pos==-1) 
    {
	    printf("\n%d does not exists in array.\n",item); 
    }
    else
    {
        printf("\n%d find @ %d position.\n",item,pos);   
    }
    printf("\n"); 
    return 0; 
} 
//read array function
void readArray(int a[],int size)
{
    int i;
    for(i=0;i< size;i++)
    {
        printf("Enter %d element :",i+1);
        scanf("%d",&a[i]);
    }
}
//finf element function
int findElement(int a[],int size,int item)
{
    int i,pos=-1;
    for(i=0;i< size;i++)
    {
        if(a[i]==item)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
