#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if((a+c)==180 && b+d==180)
	    printf("YES\n");
	    else
	    printf("No\n");
	}
	return 0;
}
