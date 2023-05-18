#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter a binary number");
	scanf("%d",&n);
	int bin=0,i=0,r;
	while(n!=0)
	{
		r=n%10;
		bin+=(r*pow(2,i));
		++i;
		n=n/10;
	}
	printf("Decimal equivalent %d",bin);
	return 0;
}