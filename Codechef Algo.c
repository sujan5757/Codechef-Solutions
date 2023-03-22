#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	   int rate;
	   scanf("%d",&rate);
	   if(rate>=2000){
	       printf("1\n");
	   }
	   else if(rate>=1600 && rate<2000){
	       printf("2\n");
	   }
	   else
	        printf("3\n");
	}
	return 0;
}

