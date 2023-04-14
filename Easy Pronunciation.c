#include <stdio.h>
#include<string.h>
int main(void) 
{
    int t;
    scanf("%u",&t);
    while(t--)
    {
        unsigned n;
        scanf("%u",&n);
        char a[100];
        scanf("%s",a);
        int l=strlen(a);
        int c=0,flag=0;
        int i=0;
        if(l>=4)
        {
           while(a[i]!='\0')
           {
                 int q=a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u';
                 if(q)
                 { 
                     c++;
                     i++;
                     if(c>=4)
                     {
                         flag=1;
                         break;
                     }
                     
                 }
                 else
                 {
                     c=0;
                     i++;
                     
                 }
             
            }
           
       if(flag==1)
        {
            printf("\nno");
        }
        else if(flag==0)
        {
            printf("\nyes");
        }
        }
        
        else if(l<4)
        {
            printf("\nyes");
        }
       
        
    }
    
	return 0;
}

