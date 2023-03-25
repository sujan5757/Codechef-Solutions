#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        n--;
        int a[100],i,b,h,j,m[100],max=0;
        scanf("%d",&b);
        for(i=0;i<b;i++)
        {
            scanf("%d",&a[i]);
        }
    

    for(i=0;i<b;i++)
    {
        h=0;
        for(j=0;j<b;j++)
        {
            if(a[i]==a[j])
            {
                h++;
            }
            
        }
        m[i]=h;
        
        
    }
    max=m[0];
    for(i=0;i<b;i++)
        {
            if(max<m[i])
            {
                max=m[i];     
                
            }
        }
    printf("%d\n",(b-max));
}
}
