#include<stdio.h>
int reverse(int,int);
int reverse(int n,int r)
{
	if(n==0)
	{
		return r;
	}
	else
	{
		r=(r*10)+(n%10);
		return reverse(n/10,r);
	}
}
int main()
{
	int num;
	printf("enter");
	scanf("%d",&num);
	printf("reversed num %d",reverse(num,0));
	return 0;
}