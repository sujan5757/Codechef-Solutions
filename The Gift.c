#include <stdio.h>
int main(void)
{
    int x,y,m;
    scanf("%d %d %d",&x,&y,&m);
    if( (x+m) >= y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
	return 0;
}
