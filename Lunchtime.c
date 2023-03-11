#include <stdio.h>

int main(void) {
 int n;
 scanf("%d",&n);
 while(n!=0){
     int x;
     scanf("%d",&x);
     if(x>=1&&x<=4){
         printf("YES\n");
     }
     else{
         printf("NO\n");
     }
     n--;
 }
	return 0;
}

