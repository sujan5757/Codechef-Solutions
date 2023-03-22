#include <stdio.h>

int main(void) {
	// your code goes here
	int n,k,m,i;
	int count=0;
	scanf("%d%d%d",&n,&k,&m);
	int a[m+1];
	while(n--){
	for(i=0;i<=m;i++){
	    scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<m;i++){
	    sum+=a[i];
	}
	
	if(a[m]<=10 && sum>=k)
	    count++;

	}
	printf("%d\n",count);
	return 0;
}

