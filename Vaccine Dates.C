#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if (a>=b && a<=c){
	        printf("Take second dose now\n");
	    }
	    else if(a>c){
	        printf("Too Late\n");
	    }
	    else{
	        printf("Too Early\n");
	    }
	}
	return 0;
}

