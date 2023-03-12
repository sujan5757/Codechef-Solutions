#include<stdio.h>
#include<string.h>
//#include<conio.h>
 
int main()
{
    int t,i,j,k,n,cos[5005],tempc,sum,m,r,RES[10004],x,y;
    char cis[5005][2][52],tempi[52],tempe[52],cs[7];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {scanf("%d",&n);
    sum=0;
    for(j=0;j<n-1;j++)
    {
 
        scanf("%s%s%s",cis[j][0],cis[j][1],cs);
        m=strlen(cs)-1;
        cos[j]=0;
        r=1;
        while(m--)
        {
 
        cos[j]=cos[j]+((cs[m]-48)*r);
        r=r*10;
        }
        sum=sum+cos[j];
    }
 
RES[5000]=0;
x=4999;
y=5001;
strcpy(tempi,cis[0][0]);
strcpy(tempe,cis[0][1]);
    for(k=1;k<n-1;)
    for(j=1;j<n-1;j++)
    {
        if((strcmp(tempi,cis[j][1])==0)&&RES[x+1]!=j)
        {
            RES[x--]=j;
            strcpy(tempi,cis[j][0]);
            k++;
            }
           else  if((strcmp(tempe,cis[j][0])==0)&&RES[y-1]!=j)
        {
            RES[y++]=j;
            strcpy(tempe,cis[j][1]);
            k++;
            }
 
 
                }
                for(j=x+1;j<x+n;j++)
                printf("%s %s %d$\n",cis[RES[j]][0],cis[RES[j]][1],cos[RES[j]]);
                printf("%d$\n",sum);
    }
   // getch();
    return 0;
    }
