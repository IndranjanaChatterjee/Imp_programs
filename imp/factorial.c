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
	printf("factorial %d",fact(num));
	return 0;
}
