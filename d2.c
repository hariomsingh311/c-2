#include<stdio.h>
int main()
{
	int a[10],i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			k=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	printf("%d",a[n-1]);
	return 0;
}
