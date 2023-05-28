#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        int sum=0,n;
        scanf("%d",&a);
        while(a!=0){
        int n=a%10;
        sum=sum+n;
        a=a/10;
        }
          printf("%d\n",sum);

    }

}
