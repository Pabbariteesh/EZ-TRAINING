#include <stdio.h>
int main()
{
    int a=10;
    if(a>100 | a++<200 | a++==12)
    {
        printf("Hello %d",a);
    }
    else
    {
        printf("hai %d",a);
    }
}
