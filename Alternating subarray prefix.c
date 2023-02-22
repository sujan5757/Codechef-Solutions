#include <stdio.h>

int main(void)
{
    int Z;
	scanf("%d",&Z);
	while(Z--)
	{
	    int n;
	    scanf("%d",&n);
	    long int a[n],i,b[n];
	    for(i=0;i<n;i++){
	        scanf("%ld",&a[i]);
	    }
	    b[n-1]=1;
	    for(i=n-2;i>=0;i--){
	        if((a[i]>=0 && a[i+1]>=0) || (a[i]<0 && a[i+1]<0)){
	            b[i]=1;
	        }else{
	            b[i]=b[i+1]+1;
	        }
	    }
	    for(i=0;i<n;i++){
	        printf("%ld ",b[i]);
	    }
	    printf("\n");
	}
	return 0;
}
