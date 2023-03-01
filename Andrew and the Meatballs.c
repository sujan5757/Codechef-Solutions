 #include <stdio.h> 

int main() 
{
    int T;
    scanf("%d", &T);
    while (T--) 
 {
    long int n,w,a[100000],dup,sum=0,sumn=0, ans;
    scanf("%lld%lld",&n,&w);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
     {
        for (int j = 0; j <n-i-1; j++)
         {
            if(a[j]>a[j+1])
             {
                dup=a[j];
                a[j]=a[j+1];
                a[j+1]=dup;
             }
         }
     }
     for(int i =0;i<n;i++)
     {
         sum = sum + a[i];
     }
      for(int i=0;i<n;i++)
     {
         sumn = sumn + a[i];
         if (sumn>sum-w){
             ans = i;
         break;
         }
         
     }
    if (sum>=w)
     printf("%lld\n",n-ans);
     else
     printf("-1\n");
     
  }   
    return 0;
}


