#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int d=a+b;
	    if(d==c)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

