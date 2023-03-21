#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(y<=1.07*x)
	    {
	        printf("yes\n");
	        
	    }
	    else{
	        printf("no\n");
	        
	    }
	    t--;
	}
	return 0;
}
