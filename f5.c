#include<stdio.h>
int main()
{
	int n,a=0,rem=0;
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		a++;
	}
	printf("%d",a);
	return 0;
}
