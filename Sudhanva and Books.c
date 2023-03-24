#include<stdio.h>
#define MAX 1000000
int top=-1;
int a[MAX];
int push(int x)
{
    top=top+1;
    a[top]=x;
}
int pop()
{
    if(top==-1)
    printf("kuchbhi?\n");
    else
    {
        printf("%d\n",a[top]);
        top=top-1;
    }
}
int main(void) 
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        int x;
        if(k==1)
        {
            scanf("%d",&x);
            push(x);
        }
        else
        pop();
    }
    return 0;
}
