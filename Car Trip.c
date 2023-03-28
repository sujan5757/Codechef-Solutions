#include <stdio.h>

int main(void) {
	// your code goes here
	int kaushal;
	scanf("%d",&kaushal);
	while(kaushal--){
	    int kaushal1;
	    scanf("%d",&kaushal1);
	   if(kaushal1<300){
	       printf("%d \n ",300*10);
	   }else{printf("%d \n",kaushal1*10);}
	}
	return 0;
}

