#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    printf("%d\n",c*b*a);
	}
	return 0;
}

