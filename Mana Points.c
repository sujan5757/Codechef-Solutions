#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    printf("%d\n",y/x);
	}
	return 0;
}
