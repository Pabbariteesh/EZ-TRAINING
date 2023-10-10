#include <stdio.h>
int main()
{
	int count=0,n;
	scanf("%d",&n);
	while(n)
	{
		count++;
		n=n&(n-1);
	}
	if(count==2)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
