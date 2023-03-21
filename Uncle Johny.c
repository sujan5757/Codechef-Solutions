#include <stdio.h>
int b[100];
void merge(int a[],int p,int q,int r){
    
    int i=p;
    int j=q+1;
    int k;
    for( k=p;k<=r;k++){
        if(i==q+1){
            b[k]=a[j];
            j++;
        }else if(j==r+1){
            b[k]=a[i]; i++;
        }else if(a[j]<a[i]){
            b[k]=a[j];j++;
        }else if(a[i]<=a[j]){
            b[k]=a[i];
           i++;
        }
    } for(int i=p;i<=r;i++){
        a[i]=b[i];
    }
    
} void mergesort(int a[],int p,int r){

    if(p<r){
        int q;
        q=(p+r)/2;
    mergesort(a,p,q);
    mergesort(a,q+1,r);
    merge(a,p,q,r);
} }

int main(void) {
   int T;
   int N,K;
   int a[100];
   int unclesonglength;
   scanf("%d",&T);
   while(T--){
       scanf("%d",&N);
       for(int i=0;i<N;i++){
           scanf("%d",&a[i]);
       }
       scanf("%d",&K);
       
       unclesonglength=a[K-1];
       mergesort(a,0,N-1);
       for(int i=0;i<N;i++){
           if(unclesonglength==a[i]){
              K=i;break; 
           }
       } printf("%d\n",K+1);
   }
    
	
	return 0;
}

