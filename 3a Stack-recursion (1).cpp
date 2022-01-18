	#include<iostream>
	#include<stdlib.h>
	using namespace std;
	struct node
	{
		int data;
		struct node *next;		
	}*top=NULL;
	void push(int val)
	{
		struct node* newnode;
		if(top==NULL)
		{
			top=(struct node*)malloc(sizeof(struct node));
			top->data=val;
			top->next=NULL;
		}
		else
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->data=val;
			newnode->next=top;
			top=newnode;			
		}	
		
	}
	
	int pop()
	{
        int a=0;
		struct node* newnode;
		if(top==NULL)
		{
			cout<<"Underflow!!"<<endl;
		}
		else
		{
            a=top->data;
			top=top->next;		
		}
		return a;
	}
	
	void display()
	{
		struct node* temp;
		temp=top;
		if(top==NULL)
		{
			cout<<"Stack is Empty!!"<<endl;
		}
		else
		{
			while(temp)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}	
            cout<<endl;	
		}		
	}

    void SortWhileInserting(int x)
    {
        if(top==NULL || x >top->data)
        {
            push(x);
        }
        else
        {
            int y= pop();
            SortWhileInserting(x);
            push(y);
        }
        
    }
    void sortstack()
    {
        if(top!=NULL)
        {
        int a=pop();
        sortstack();
        SortWhileInserting(a);
        }
    }
	int main()
  {
    int n,val;
    cout<<"Enter the number of Elements:";
    cin>>n;
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
    {
        cin>>val;
        push(val);
    }
    cout<<"stack Elements before sorting:";
    display();
    sortstack();
    cout<<"stack Elements after sorting:";
    display();


}  
