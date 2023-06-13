//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b,c;
    float m,n,l;
    scanf("%d%d%d",&a,&b,&c);
    m=400/a;
    n=400/b;
    l=400/c;
    if(m>=n && m>=l)
    printf("Alice\n");
    else if(n>=m && n>=l)
    printf("BOB\n");
    else
    printf("Charlie\n");
    }
    return 0;
}
