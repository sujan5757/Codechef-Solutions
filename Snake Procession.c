#include <stdio.h>
int main(void) {
	int i,t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    char ar[n],f='T';
	    int ff=0;
	    scanf("%s",ar);
	    for(i=0;i<n;i++){
	        if(ar[i]!='.'){
    	        if(ar[i]==f)
    	            goto l;
    	        (f=='H')?(f='T'):(f='H');
	        }
	    }
	    if(f=='H')
	    l:ff=1;
	    printf("%s\n",(ff==0)?"Valid":"Invalid");
	}
	return 0;
}

