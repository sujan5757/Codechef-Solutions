#include <stdio.h>

int main(void) {
	int M;
	scanf("%d",&M);
	while(M--)
	{
	     char p[100];
        scanf("%s" ,p);
        int count1=0,count0=0,i;
        for(i=0;i<strlen(p);i++)
        {
            if(p[i]=='1')
            count1++;
            else
            count0++;
            
            
        }
        if(count1>count0)
        printf("\nWIN");
        else
        printf("\nLOSE");
	}
	return 0;
}

