//Sujan P S
#include<stdio.h>
int main()
{
    int f;
    scanf("%d",&f);
    while(f--)
    {
    int h;
    scanf("%d",&h);
    if(h%2==0 && h%7==0)
    printf("Alice\n");
    else if(h%2==1 && h%9==0)
    printf("Bob\n");
    else
    printf("Charlie\n");
    }
    return 0;
}
