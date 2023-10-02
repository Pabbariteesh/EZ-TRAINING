#include <stdio.h>
int main()
{
	int a[]={10,20,10,10,10};
	int res=0,i=0;
	for(i=0;i<6;i++)
	{
		res=res^a[i];
	}
	printf("%d",res);
}
