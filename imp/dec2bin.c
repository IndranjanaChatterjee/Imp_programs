#include<stdio.h>
int main()
{
	int n;
	printf("Enter a decimal number");
	scanf("%d",&n);
	int bin=0,i=1,r;
	while(n!=0)
	{
		r=n%2;
		bin+=(r*i);
		i=i*10;
		n=n/2;
	}
	printf("Binary equivalent %d",bin);
	return 0;
}