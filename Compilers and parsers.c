#include<stdio.h>
#define MAX 10000000
int top=-1;
int a[MAX];
int push(int B)
{
    top=top+1;
    a[top]=B;
}
int coq()
{
    if(top==-1)
    {
        printf("kuchbhi?\n");
    }
    else
    {
        printf("%d\n",a[top]);
        top=top-1;
    }
}

int main()
{
    int w;
    scanf("%d",&w);
    for(int n=0;n<w;n=n+1)
    {
        int c,B;
        scanf("%d",&c);
        if(c==1)
        {
            scanf("%d",&B);
            push(B);
        }
        else
        {
            coq();
        }
    }
    return 0;
}
