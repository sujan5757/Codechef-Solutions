 #include<stdio.h>
#include<string.h>
int S_top=-1;
void push(char Stack[][200],char *temp)
{
	S_top++;
	strcpy(Stack[S_top],temp);		
}
void pop()
{
	S_top--;
}
void extract(char Stack[][200],char *s)
{
	char temp[200];
	int i=0;
	for(int j=0;s[j]!='\0';j++)
	{
		if(s[j]=='/')
		{
			temp[i]='\0';
			if(strcmp(temp,"..")==0) 
				pop();
			else
			push(Stack,temp);
			i=0;
		}
		else
		{
			temp[i]=s[j];
			i++;
		}
	}
	temp[i]='\0';
	if(strcmp(temp,"..")==0) 
		pop();
	else
		push(Stack,temp);

}
void show(char Stack[][200])
{
	for(int i=0;i<=S_top;i++)
		printf("/%s",Stack[i]);
	printf("/\n");
}
int main()
{
	int T;
	char Stack[100][200];
	char cmd[5],dir[200];
	int N;
	scanf("%d",&T);
	while(T--)
	{
	S_top=-1;	scanf("%d",&N);
	while(N--)
	{
	scanf("%s",cmd);		if(strcmp(cmd,"pwd")==0)
	show(Stack);
if(strcmp(cmd,"cd")==0)
{
scanf("%s",dir);
if(dir[0]=='/')
{
S_top=-1;
extract(Stack,dir+1);
	}
else
{
	extract(Stack,dir);
}
}
	}
	}
}
