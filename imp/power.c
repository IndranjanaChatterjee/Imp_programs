#include<stdio.h>
int power(int,int);
int power(int n,int r)
{
	if(r==0)
	{
		return 1;
	}
	else
	{
		return n*power(n,(--r));
	}
}
int main()
{
	int num,d;
	printf("enter");
	scanf("%d%d",&num,&d);
	printf("product %d",power(num,d));
	return 0;
}