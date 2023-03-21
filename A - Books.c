#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int *a;
	    a = (int *)malloc(n*sizeof(int));
	    for(int i = 0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int *b;
	    b = (int *)malloc(n*sizeof(int));
	    for(int i = 0;i<n;i++){
	        int count = 0;
	        for(int j = 0;j<n;j++){
	            if(a[j]>a[i]){
	                count++;
	            }
	        }
	        b[i] = count;
	        printf("%d ",count);
	    }
	    printf("\n");
	}
	return 0;
}
