#include <stdio.h>
int main()
{
	int a[50],i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the values into array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x=miss(a);
	printf("%d",x);
	
}
int miss(int a[])
{
	int p=sizeof(a)/sizeof(a[0]);
	int q=p*(p+1)/2;
	int r=0,i;
	for(i=0;i<p;i++)
	{
		r=r+a[i];
	}
	return q-r;
}

