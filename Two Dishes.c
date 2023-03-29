#include <stdio.h>

int main(void) {
	int n,i,x,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%d%d%d%d",&x,&a,&b,&c);
	    if(b>=x && x<=(a+c)){
	        printf("Yes\n");
	    }else{
	        printf("No\n");
	    }
	}
	return 0;
}

