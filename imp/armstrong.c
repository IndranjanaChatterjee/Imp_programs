#include<stdio.h>
#include<math.h>
int main()
{
	int n,k;
	scanf("%d",&n);
	k=(int)(log10(n)+1);
	int a=n;
	int sum=0;
	while(n!=0)
	{
		sum+=pow((n%10),k);
		n=n/10;
	}
	if(sum==a)
	{
		printf("armstrong");
	}
	else
	{
		printf("no");
	}
	return 0;
}