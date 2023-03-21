#include <stdio.h>

int is_palindrome(int n){
    char str[20000];
    sprintf(str,"%d",n);
    int start = 0;
    int end = strlen(str)-1;
    for(;start<end;start++,end--){
        if(str[start]!=str[end]){
            return 0;
        }
    }
    return 1;
}

int main(void) {
	int a,b;
	scanf("%d",&a);
	
	while(a--){
	scanf("%d",&b);
	if(is_palindrome(b)){
	    printf("wins\n");
	}else{
	    printf("loses\n");
	}
	    
	}
	return 0;
}

