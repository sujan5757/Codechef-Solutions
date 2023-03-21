#include <stdio.h>

int main(void) {
	int n1,n2,a,b;
	scanf("%d %d",&n1,&n2);
	a=n1+n2;
	b=n1-n2;
	if(n1>n2){
	    printf("%d\n",b);
	}
	else{
	    printf("%d\n",a);
	}
	return 0;
}

