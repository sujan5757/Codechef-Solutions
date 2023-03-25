#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes her
	int t; int l; int i;
	char c[100000]; int count;
	
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%s",c);
	    l=strlen(c);
	    i=0; count=0;
	    
	    while(i<l)
	    {
	        if(i==(l-1))
	        i++;
	        else
	        if(*(c+i)==*(c+(i+1)))
	        i++;
	        else
	        {
	            count++;
	            i=i+2;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

