#include <stdio.h>
int main()
{
    int t,n,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&s);
        if(n<s)
        {
            printf("%d\n",2*n-s);
        }
        else if(n>s)
        {
            printf("%d\n",s);
        }
        else 
        {
            printf("%d\n",n);
        }
    }
    return 0;
}
