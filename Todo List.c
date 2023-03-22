#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int count=7,c=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=1 && a[i]<=7){
	            c++;
	            if(c==7)
	                break;
	            continue;
	        }
	       count++;
	        
	    }
	    
	    printf("%d\n",count);
	    
	}
	return 0;
}

