 #include <stdio.h>
	int cmpfunc(const void *p,const void *q){
    return *(int *)p-*(int *)q;
}
int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	while(x--){
	    int n,c=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    qsort(arr,n,sizeof(int),cmpfunc);
	    for(int i=0;i<n;i++){
	        if(arr[i]>i+1){
	            c=-1;
	            break;
	        }
	        else {
	            c+=i+1-arr[i];
	        }
	    }
	    printf("%d\n",c);
	}

	return 0;
}
