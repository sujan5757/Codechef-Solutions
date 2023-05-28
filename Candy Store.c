//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=b)
    printf("%d\n",b);
    else
    printf("%d\n",(a+((abs(b-a))*2)));
    
    }
    return 0;
}
