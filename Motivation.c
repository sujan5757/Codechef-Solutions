#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,x,s,r;
        scanf("%d %d",&n,&x);
        int b=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&s,&r);
            if(s<=x)
            {
                if(r>b)
                {
                    b=r;
                }
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
