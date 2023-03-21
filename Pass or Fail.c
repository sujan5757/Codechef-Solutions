#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--) 
{
    int n,x,p;
    scanf("%d%d%d",&n,&x,&p);
    if((x*3+(n-x)*-1)>=p)
    {
        printf("pass\n");
    }
    else{
        printf("fail\n");
    }
}
	return 0;
}

