#include <stdio.h>
int main()
{
	int a,i;
	scanf("%d %d",&a,&i);
	if(a&(1<<(i-1)))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

}
