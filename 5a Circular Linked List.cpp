#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *tail;
void init(int a,int b[])
{
	struct node *temp,*temp2;
	tail=(struct node*)malloc(sizeof(struct node));
	tail->next=tail;
	tail->data=b[0];
	temp=tail;
	if(tail!=NULL)
	{
		for(int i=1;i<a;i++)
		{   temp2=(struct node*)malloc(sizeof(struct node));
			temp2->data=b[i];
			temp->next=temp2;
			temp=temp->next;			
		}
		temp->next=tail;
		tail=temp;
		
	}
	
}
void display()
{
	struct node *temp;
	temp=tail->next;
	printf("\n");
	do
	{
		
		printf("%d",temp->data);
		temp=temp->next;
	}while(temp!=tail->next);
}
void insertbeg(int a)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->next=tail->next;
	tail->next=temp;
			
}
void insertend(int a)
{
	struct node *temp,*temp2;
	temp2=(struct node*)malloc(sizeof(struct node));
	temp2->data=a;
	temp2->next=tail->next;
	temp=tail;
	temp->next=temp2;
	tail=temp2;
}

void insertrand(int a,int b)
{
	int i=0;
	struct node *temp,*temp2;
	temp2=(struct node*)malloc(sizeof(struct node));
	temp=tail->next;
	while(i!=a-1)
	{
		i=i+1;
		temp=temp->next;		
	}
	temp2->data=b;
	temp2->next=temp->next;
	temp->next=temp2;
	temp=temp2->next;
}
void delbeg()
{
	tail->next=tail->next->next;	
}
void delend()
{
	struct node *t;
	t=tail->next;
	while(t->next!=tail)
	{
		t=t->next;
	}
	t->next=tail->next;
	tail=t;
}
void delrand(int a)
{
	struct node *t;
	t=tail->next;
	int i=0;
	while(i!=a-1)
	{
		i+=1;
		t=t->next;
	}
	t->next=t->next->next;
}
int main()
{
	int a=5,b[]={1,2,3,4,5};
	init(a,b);
	display();
	insertbeg(0);
	display();
	insertend(6);
	display();
	insertrand(3,3);
	display();
	delbeg();
	display();
	delend();
	display();
	delrand(3);
	display();
				
}
