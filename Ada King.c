#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int r,c,k;
	scanf("%d %d %d", &r, &c, &k);
	int rmin, rmax, cmin, cmax,ans;
	if(r - k < 1)
		rmin = 1;
	else
		rmin = r - k;

	if(r + k > 8)
		rmax = 8;
	else
		rmax = r + k;
	
	if(c - k < 1)
		cmin = 1;
	else
		cmin = c - k;
	
	if(c + k > 8)
		cmax = 8;
	else
		cmax = c + k;

	ans = (rmax - rmin + 1) * (cmax - cmin + 1);

	printf("%d\n", ans);
	}
	return 0;
}

