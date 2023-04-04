#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	int x1,y1,x2,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	if(x1+y1<=x2+y2){
	    printf("%d\n",x1+y1);
	}
	else{
	    printf("%d\n",x2+y2);
	}
	}
	return 0;
}


