#include <stdio.h>
int main()
{
	int a,count=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a)
	{
		count++;
		a=a&(a-1);
	}
	printf("Count set bits=%d",count);
}
