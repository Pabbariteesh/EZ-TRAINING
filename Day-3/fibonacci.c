#include <stdio.h>
int main()
{
	int n1=0,n2=1,n,n3,i;
	scanf("%d",&n);
	printf("%d ",n1);
	printf("%d ",n2);
	for(i=0;i<n;i++)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
}
