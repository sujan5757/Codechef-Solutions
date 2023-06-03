//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b,c,d,f,g;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    f=b-c;
    g=a+(f*d);
    printf("%d\n",g);
    }
    return 0;
}
