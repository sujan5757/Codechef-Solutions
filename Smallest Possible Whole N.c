#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    if (k==0)
	    {
	        printf("%d\n",n);
	    }
	    else
	    {
	        printf("%d\n",n%k);
	    }
    }
	return 0;
}
