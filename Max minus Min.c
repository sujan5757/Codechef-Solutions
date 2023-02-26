#include <stdio.h>
void main() {
	// your code goes here
	int a,b,c,l,s,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    if(a>=b && a>=c)
	    l=a;
	    else if(b>=a && b>=c)
	    l=b;
	    else
	    l=c;
	    if(a<=b && a<=c)
	    s=a;
	    else if(b<=a && b<=c)
	    s=b;
	    else
	    s=c;
	    printf("%d\n",l-s);
	}
}

