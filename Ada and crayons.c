#include <stdio.h>
#include<string.h>
int main(void) 
{
    int v;
	scanf("%d",&v);
	for(int i = 0 ; i<v ; i++)
	{
	    char str[50];
	    scanf("%s",&str);
	    int cU = 0;
	    int cD= 0;
	    int j = 0;
	    while(j<strlen(str))
	    {
	        if(str[j]=='U')
	        {
	            while(str[j]=='U')
	            {
	                j++;
	            }
	            cU++;
	        }
	        else if(str[j]=='D')
	        {
	            while(str[j]=='D')
	            {
	                j++;
	            }
	            cD++;
	        }
	        
	    }
	    if(cU>=cD)
	    {
	        printf("%d\n",cD);
	    }
	    else
	    {
	        printf("%d\n",cU);
	    }
	}
	return 0;
}
