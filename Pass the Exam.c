//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)>=100 && a>=10 && b>=10 && c>=10)
    printf("PASS\n");
    else
    printf("FAIL\n");
    }
    
    return 0;
}
