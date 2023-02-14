#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d", &x, &y);
        if((2*x)>(5*y))
        {
            printf("chocolate \n");
        }
        else if((2*x)==(5*y))
        {
            printf("either \n");
        }
        else
        printf("candy \n");
        t--;
    }
	// your code goes here
	return 0;
}

