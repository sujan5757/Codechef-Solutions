#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int x1,x2,y1,y2,z1,z2;
	    scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
	    (x1<=x2 && y1<=y2 && z1>=z2)?printf("YES\n"):printf("No\n");
	}
	return 0;
}
