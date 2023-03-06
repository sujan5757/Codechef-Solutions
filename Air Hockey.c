#include<stdio.h>
int main()
{
    int T,i,A,B;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&A,&B);
        if(A>B)
        printf("%d\n",7-A);
        else
        printf("%d\n",7-B);
    }
    return 0;
}

