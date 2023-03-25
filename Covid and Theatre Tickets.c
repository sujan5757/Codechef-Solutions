#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int count=0;
	    for(int i=0;i<n;i+=2){
	        for(int j=0;j<m;j+=2){
	            count++;
	        }
	    }printf("%d\n",count);
	}
	return 0;
}

