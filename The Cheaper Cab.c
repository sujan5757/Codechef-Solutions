#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a<b)
        printf("\nFIRST");
        else if(a==b)
        printf("\nANY");
        else
        printf("\nSECOND");
    }
}
