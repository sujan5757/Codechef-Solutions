#include <stdio.h>
int main(void) 
{
    long long int a;
    scanf("%lld",&a);
    if(a%6==0||a%6==1||a%6==3)
    {
        printf("\nyes");
    }
    else
    {
        printf("\nno");
    }
	return 0;
}

