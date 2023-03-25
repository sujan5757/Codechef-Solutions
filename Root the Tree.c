#include<stdio.h>
#include<stdlib.h>

int compare(void * p1,void * p2)
{
    int s1 = *(int *)p1;
    int s2 = *(int *)p2;
    return s1-s2;
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int N;
        scanf("%d",&N);
        int u,v;
        int frequency[N];
        for(int j=0;j<N;j++)
        frequency[j]=0;
        for(int j=1;j<N;j++)
        {
            scanf("%d %d",&u,&v);
            frequency[v-1]++;
        }
        qsort(frequency,N,sizeof(int),compare);
        int sum=0;
        for(int j=0;j<N;j++)
        {
            if(frequency[j]>1)
            sum=sum+frequency[j]-1;
        }
        printf("%d\n",sum);
    }
}
