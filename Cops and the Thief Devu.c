#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,x,y,i;
	    scanf("%d %d %d",&m,&x,&y);
	    int a[m];
	    for(i=0;i<m;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int count=0,j,k,p,q,flag;
	    for(j=1;j<=100;j++)
	    {
	        flag=0;
	        for(k=0;k<m;k++)
	        {
	            q=a[k]-x*y;
	            p=a[k]+x*y;
	            if(j>=q && j<=p)

	            {
	            flag=1;
	            }
	        }
	        if(flag==0)
	        {
	            ++count;
	        }
	    }
	    printf("%d\n", count);
	}
	return 0;
}
