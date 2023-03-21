#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s1[100],s2[100];
	    scanf("%s %s",s1,s2);
	    int l=strlen(s1);
	    int min=0,max=0;
	    for(int i=0;i<l;i++)
	    {
	        if(s1[i]=='?' || s2[i]=='?')
	        max++;
	        else if(s1[i]!=s2[i])
	        {
	            min++;
	            max++;
	        }
	    }
	    printf("%d %d\n",min,max);
	}
	return 0;
}

