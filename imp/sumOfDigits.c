#include<stdio.h>
int digits(int);
int digits(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n%10)+digits(n/10);
	}
}
int main()
{
	int num;
	printf("enter");
	scanf("%d",&num);
	printf("sum %d",digits(num));
	return 0;
}