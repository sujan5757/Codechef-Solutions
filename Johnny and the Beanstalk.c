#include<stdio.h>

int main()
{
    int t,tt,a;
    scanf("%d",&t);
    for(tt=0;tt<t;tt++)
    {
        int flag=0,maxx=1;
        int i,n;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a>maxx || (a!=maxx && i==n))
            {
                flag=1;
                break;
            }
            maxx=(maxx-a)*2;
        }
        if(flag==1)
            printf("No\n");
        else
            printf("Yes\n");

    }
}
