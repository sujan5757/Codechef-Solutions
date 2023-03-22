#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int cntM=0;
            for(int j=0;j<n;j++){
                if(arr[i]<arr[j]){
                    cntM++;
                }
            }
            if(cntM<n-cntM){
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
