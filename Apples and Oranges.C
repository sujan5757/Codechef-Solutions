#include <stdio.h>

int main(void) {
	// your code goes here
	//int t;
	//scanf("%d",&t);
	//while(t--){
	    int x,y,z;
	    scanf("%d",&x);
	    scanf("%d %d",&y, &z);
	    if((y+z)<= x){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	//}
	
	return 0;
}

