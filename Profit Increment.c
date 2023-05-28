//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a*10/100;
    d=a-b;
    printf("%d\n",((a+c)-d));
    }
    return 0;
}
