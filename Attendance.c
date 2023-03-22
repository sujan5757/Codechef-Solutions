#include <stdio.h>

int main(void) {
	
	int x;
	scanf("%d",&x);
	while(x--){
	    int n,t=0;
	    scanf("%d",&n);
	    char s1[n][101],s2[n][101];
	    for(int i=0;i<n;i++)scanf("%s %s",&s1[i],&s2[i]);
	    for(int i=0;i<n;i++){
	        t=0;
	        for(int z=0;z<n;z++){
	            if(strcmp(s1[i],s1[z])==0&&i!=z){
	                t=1;
	                break;
	            }
	        }
	        if(t!=1)printf("%s\n",s1[i]);
	        else printf("%s %s\n",s1[i],s2[i]);
	    }
	}
	return 0;
}

