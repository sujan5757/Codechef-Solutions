//Sujan P S
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int a;
    scanf("%d",&a);
    if(a<=10)
    printf("Lower Double\n");
    else if(a>10 && a<=15)
    printf("Lower Single\n");
    else if(a>15 && a<=25)
    printf("Upper Double\n");
    else
    printf("Upper single\n");
   
    }
    return 0;
}
