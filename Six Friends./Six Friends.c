#include <stdio.h>

int main()
{
    int t,x,y,a,b;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d %d\n",&x,&y);
        a=3*x;
        b=2*y;
        if(a<b)
        printf("%d\n",a);
        else
        printf("%d\n",b);
    }
	return 0;
}

