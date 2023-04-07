#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,M,O;
	    scanf("%d %d %d",&N,&M,&O);
	    int X=N*2+M*2;
	    printf("%d\n",X*O);
	    
	}
	return 0;
}

