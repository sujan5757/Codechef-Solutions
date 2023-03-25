#include<stdio.h>
#include<stdlib.h>
int N,M,heapcapacity;
int *pos,*visited,**heap;
struct Node
{	
	int vertex;
	int weight;
	struct Node *next;
};

struct Node **list;
void createList()
{
	int i;
	list=(struct Node **)malloc(sizeof(struct Node *)*N);
	for( i=0;i<N;i++)
		{
			list[i]=NULL;
		
		}
}
void append(int v1,int v2)
{
	int found=0;
	struct Node *new=(struct Node *)malloc(sizeof(struct Node));
	struct Node *temp;
	new->vertex=v2;
	new->weight=0;
	new->next=NULL;
	if(!list[v1-1])
		list[v1-1]=new;
	else
	{
		temp=list[v1-1];
		while(temp)
		{
			if(temp->vertex==v2)
			{
				found=1;
				if(temp->weight==1)
					{
					temp->weight=0;
					break;
					}
				else
					break;
				
			}
			if(temp->next==NULL)
				{
				temp->next=new;
				break;
				}
			temp=temp->next;
		}
	}
	found=0;
	struct Node *new1=(struct Node *)malloc(sizeof(struct Node));
	new1->vertex=v1;
	new1->weight=1;
	new1->next=NULL;
	if(!list[v2-1])
		list[v2-1]=new1;
	else
	{
		temp=list[v2-1];
		while(temp)
		{
			if(temp->vertex==v1)
				break;
			if(temp->next==NULL)
			{	
			temp->next=new1;
			break;
			}
			temp=temp->next;
		}
	}

}
int Deletemin()
{
	int tempv=heap[1][0],minel;
	minel=tempv;
	int tempd=heap[1][1];
	int i=1,min;
	pos[heap[heapcapacity][0]]=1;
	pos[heap[1][0]]=heapcapacity;
	heap[1][0]=heap[heapcapacity][0];
	heap[1][1]=heap[heapcapacity][1];
	heap[heapcapacity][0]=tempv;
	heap[heapcapacity][1]=tempd;
	heapcapacity--;
	while(i<=(heapcapacity/2))
	{
		min=i;
		tempv=heap[i][0];
		tempd=heap[i][1];
		if((2*i)<=heapcapacity && heap[min][1]>heap[2*i][1])
			min=2*i;
		if((2*i+1)<=heapcapacity && heap[min][1]>heap[2*i+1][1])
			min=2*i+1;
		if(min==i)
			break;
		pos[heap[min][0]]=i;
		pos[heap[i][0]]=min;
		heap[i][0]=heap[min][0];
		heap[i][1]=heap[min][1];
		
		heap[min][0]=tempv;
		heap[min][1]=tempd;
		i=min;
	}
	return minel;
}
void adjustHeap(int vertex,int newdistance)
{
	int heapposition=0,i=1,parent,tempv,tempd;
	heapposition=pos[vertex];
	heap[heapposition][1]=newdistance;
	while(heapposition>1)
	{
	    parent=heapposition/2;
		if(heap[heapposition][1]<heap[parent][1])
		{
			pos[heap[heapposition][0]]=parent;
			pos[heap[parent][0]]=heapposition;
			tempv=heap[heapposition][0];
			tempd=heap[heapposition][1];
			heap[heapposition][0]=heap[parent][0];
			heap[heapposition][1]=heap[parent][1];
			heap[parent][0]=tempv;
			heap[parent][1]=tempd;
			heapposition=parent;
		}
		else
			break;
	}
}
int ShortestPathToN(int vertex)
{	int i,j,total=1,v1,v2,minvertex,adj,edw;
	for(i=0;i<=N;i++)
		{
		visited[i]=0;
		heap[i]=(int *)malloc(sizeof(int)*2);
		heap[i][0]=i;
		pos[i]=i;
		heap[i][1]=100001;
		}
		heapcapacity=N;
	for(i=0;i<M;i++)
	 {
	 scanf("%d %d",&v1,&v2);
	 if(v1!=v2)
		append(v1,v2);
	}	
	adjustHeap(1,0);
	//print();
	while(heapcapacity!=0)
	{
		minvertex=Deletemin();
		visited[minvertex]=1;
		struct Node *l=list[minvertex-1];
		
		while(l)
		{
			adj=l->vertex;
			edw=l->weight;
			if(heap[pos[adj]][1]>(edw+heap[pos[minvertex]][1]) && visited[adj]==0)
				{
								adjustHeap(adj,edw+heap[pos[minvertex]][1]);
				}
				
			l=l->next;
			
		}
	}
	if(heap[pos[N]][1]==100001)
		return -1;
	else 
		return heap[pos[N]][1];
}

int main()
{
	scanf("%d %d",&N,&M);
	visited=(int *)malloc(sizeof(int)*N+1);
	heap=(int **)malloc(sizeof(int *)*N+1);
	if(N==1)
		printf("1\n");
	else
	{
		createList();
		pos=(int *)malloc(sizeof(int)*N+1);
		printf("%d",ShortestPathToN(1));
	}
	return 0;
}

	
