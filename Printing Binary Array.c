//Sujan P S
#include<stdio.h>
int main()
{
    int sujan;
    scanf("%d",&sujan);
    while(sujan--)
    {
     int sufi;
     int abhi;
     scanf("%d",&abhi);
     for(int i=0;i<abhi;i++){
         scanf("%d",&sufi);
         if(sufi==1) 
         printf("0 ");
         else
         printf("1 ");
     }
     printf("\n");
    }
    return 0;
}
