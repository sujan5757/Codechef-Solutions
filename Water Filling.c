//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int s,g,j;
    scanf("%d%d%d",&s,&g,&j);
    if((s+g+j)==0 || (s+g+j)==1)
    printf("Water filling time\n");
    else
    printf("NOt now\n");
    }
    return 0;
}
