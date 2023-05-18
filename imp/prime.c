#include<stdio.h>
int prime(int );
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a,b,k;
	printf("enter the range");
	scanf("%d%d",&a,&b);
	int i;
	printf("prime numbers");
	for(i=a;i<=b;i++)
	
	{
		k=prime(i);
		if(k==1)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}