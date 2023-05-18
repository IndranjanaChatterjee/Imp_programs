#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 num");
	scanf("%d%d",&a,&b);
	int p=a*b;
	if(a>b)
	{
		a=a;
		b=b;
	}
	else
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	int c;
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("hcf %d\n",a);
	printf("lcm %d",(p/a));
	return 0;
}