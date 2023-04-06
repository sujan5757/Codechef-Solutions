#include <stdio.h>

int main(void) {
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
	    int X,Y;
    	scanf("%d %d",&X,&Y);
    	
    	if( X * 3 <= Y){
    	    printf("YES\n");
    	}else{
    	    printf("NO\n");
    	}
	}
	return 0;
}

