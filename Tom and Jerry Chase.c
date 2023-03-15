#include <stdio.h>

int main(void) {
	// your code goes here
	int n,x,y;
	scanf("%d",&n);
	while(n--){
	    scanf("%d%d",&x,&y);
	    if(y>x)
	    printf("YES\n");
	    else
	    printf("NO\n");
        }
	return 0;
}
