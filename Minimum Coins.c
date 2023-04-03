#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d",&a);
	    b = a%10;
	    printf("%d\n",b);
	}
	return 0;
}
