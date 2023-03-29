#include <stdio.h>

int main(void) {
	// your code goes here
	int t,hp[3],score,j;
	scanf("%d",&t);
	while(t--)
	{
	   for(int i=0;i<3;i++)
	   {
	       scanf("%d",&hp[i]);
	   }
	   score=0;
	   j=hp[0];
	    for(int i=0;i<3;i++)
	    {
	        score=score+hp[i];
	        if(j>hp[i])
	        {
	            j=hp[i];
	        }
	            
	    }
	    score=score-j;
	    printf("%d\n",score);
	}
	return 0;
}

