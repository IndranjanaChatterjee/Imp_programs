#include<stdio.h>
#include<math.h>
int fact(int);
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	int sum=0,a=num;
	while(num!=0)
	{
		sum+=fact(num%10);
		num/=10;
	}
	if(sum==a)
	{
		printf("Special number");
	}
	else
	{
		printf("no");
	}
	return 0;
}
