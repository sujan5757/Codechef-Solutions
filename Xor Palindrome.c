#include <stdio.h>
int main()
{
    int a,b,i,j,n,t,c=0,d;
    scanf("%d", &t);
    for (a=1;a<=t;a++)
    {
        c=0;
        scanf("%d",&n);
        char string[n+1];
        scanf("%s", string);
        for (i=0;i<n/2;i++)
        {
            j = n - 1 - i;
            if (string[i]!=string[j])
            {
                c++;
            }
        }
        b=(c+1)/2;
        printf("%d\n",b);
    }
    return 0;
}
