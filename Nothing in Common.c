#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=t;i>0;i--){
	    int a=0,b=0,count=0;
	    scanf("%d %d",&a,&b);
	    int c= 0;
	    int arr1[1000001] = {0};
	    for(int i=0;i<a;i++){
            int y;
	        scanf("%d",&y);
	        arr1[y]++;
	    }
	    for(int i =0;i<b;i++){
            int x;
	        scanf("%d",&x);
	        if (arr1[x]==1) { count++ ; } 
	    }

	    printf("%d\n",count);
	}
	return 0;
}
