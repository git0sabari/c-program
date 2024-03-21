#include<stdio.h>
int main()
{
	int a,b,r=0,rem;
	printf("enter the number : ",a);
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		rem=b%10;
		r=r*10+rem;
		b=b/10;
	}
	if(r==a)
	{
	   printf("it is palindrome");
	}
	else
	{
	   printf("it is not palindrome");
	}
}
