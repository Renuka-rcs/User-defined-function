#include<stdio.h>
int main()
{
	int x,y;
	int a,b,t,hcf;
	int lcm;
	printf("Enter the two numbers\n");
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	while(a!=b)
	{
		if(a<b)
			a=a+x;
		else
			b=b+y;
	}
	 lcm=a;
	printf("LCM of given numbers is %d \n",lcm);
        a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
         lcm=(x*y)/hcf;
	printf("HCF of given numbers is %d \n",hcf);
	return 0;
}
