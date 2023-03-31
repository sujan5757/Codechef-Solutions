#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t>0){
        int n,x,k;
        scanf("%d %d %d",&n,&x,&k);
        if(n*x<=k){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        t--;
    }
	return 0;
}

