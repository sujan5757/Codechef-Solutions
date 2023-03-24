#include <stdio.h>

int main(void) {
  int T;
  scanf("%d",&T);
  while (T--){
      int n , sum=0,rem;
      scanf("%d",&n);
      while(n>0)
      {
          rem=n%10;
          sum=sum+rem;
          n=n/10;
      }
      printf("%d\n",sum);
  }
	return 0;
}
