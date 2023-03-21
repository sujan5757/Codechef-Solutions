#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
            int count =0;
            int prev=0 ,now;
       while(b--){
            scanf("%d",&now);
            if(now!=prev){
                prev = now;
                count++;
            }
        }
        printf("%d\n",count);
    }
	return 0;
}

