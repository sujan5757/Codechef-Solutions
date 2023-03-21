#include <stdio.h>
int cmpfunc(const void * a,const void * b)
{
    return(*(int*)a - *(int*)b);
}

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),cmpfunc);
        b=a[1]-a[0];
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<b)
            b=a[i+1]-a[i];
        }
        printf("%d\n",b);
    }
	// your code goes here
	return 0;
}

