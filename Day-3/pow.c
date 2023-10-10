#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	for(i=1;i<n/2;i=i+1)
	{
		if(pow(10,i)==n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Its a power of 10");
	}
	else
	{
		printf("Its not  a power of 10");
	}
}
