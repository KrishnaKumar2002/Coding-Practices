#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next,*pre;
}*head,*tail;
void insertatbeg(int a)
{
	struct node *previous,*current,*temp3;
	if(head==NULL)
	{
	head=(struct node*)malloc(sizeof(struct node));
	head->pre=NULL;
	head->next=NULL;
	head->data=a;
	tail=head;
	}
	else
	{
		    current=(struct node*)malloc(sizeof(struct node));
			current->data=a;
			current->pre=NULL;
			current->next=head;
			head=current;			
		
	}
	
	
}

void display()
{
	struct node *temp;
	temp=head;
	cout<<"\n";
	while(temp!=NULL)
	{
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insertend(int a)
{
	if(head==NULL)
	{
	head=(struct node*)malloc(sizeof(struct node));
	head->pre=NULL;
	head->next=NULL;
	head->data=a;
	tail=head;
	}
	else{
	struct node *current;
	current=(struct node*)malloc(sizeof(struct node));
	current->data=a;
	current->pre=tail;
	current->next=NULL;
	tail->next=current;
	tail=current;
	}
}

void insertAfter(int a,int b)
{
	int flag=1;
	struct node *temp,*current;
	current=(struct node*)malloc(sizeof(struct node));
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==b)
		{
			current->data=a;
			current->pre=temp;
			current->next=temp->next;
			temp->next=current;
			temp=current->next;
			temp->pre=current;
			flag=0;
			cout<<"Inserted";
			break;
		}
		temp=temp->next;		
	}
	if(flag)
		cout<<"Unable to Insert";
	
}
void delbeg()
{
	if(head==NULL)
	{
		cout<<"Unable to Delete";
		return;
	}

	head=head->next;
	head->pre=NULL;	
}
void delend()
{	
	if(tail==NULL)
	{
		cout<<"Unable to Delete";
		return;
	}
	tail=tail->pre;
	tail->next=NULL;
}
void delrand(int a)
{
	struct node *t;
	t=head;
	int flag=1;
	while(t!=NULL)
	{
		if(t->next->data==a)
		{
		t->next=t->next->next;
		t->next->pre=t;
		flag=0;
		break;
		}
		t=t->next;
	}
	if(flag)
		cout<<"Unable to delete";
}
int main()
{

	int val,ch,k;
	while(ch!=8)
	{
		cout<<"Enter Your choice:\n1.Insert at Beginning\n2.Insesrt at End\n3.Insert Random\n4.Delete at Beginning\n5.Delete at End\n6.Delete nth Node\n7.Display\n8.EXIT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter the Data:";
					cin>>val;
					insertatbeg(val);
					break;
			case 2: cout<<"\nEnter the Data:";
					cin>>val;
					insertend(val);
					break;
			case 3: cout<<"\nEnter the Data:";
					cin>>val;
					cout<<"Enter the Value of Existing node:";
					cin>>k;
					insertAfter(val,k);
					break;
			case 4: delbeg();
					break;
			case 5: delend();
					break;
			case 6: cout<<"Enter the Location:";
					cin>>k;
					delrand(k);
					break;
			case 7: display();
			default: cout<<"Enter a Valid input!!!";
				
					}
	}
  }
  

