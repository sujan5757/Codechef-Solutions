#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int d=b-a;
	    printf("%d\n",d/c);
	}
	return 0;
}

    
