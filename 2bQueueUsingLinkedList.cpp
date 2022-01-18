   #include<iostream>
   #include<stdlib.h>
   using namespace std;
   struct node
   {
       int data;
       struct node *next;
   }*front=NULL,*last=NULL;
   void enqueue(int val)
   {
       if(last==NULL)
       {
           last=(struct node*)malloc(sizeof(struct node));
           front=last;
           last->data=val;
           last->next=NULL;
       }
       else
       {
           struct node *newnode;
           newnode=(struct node*)malloc(sizeof(struct node));
           newnode->data=val;
           newnode->next=NULL;
           last->next=newnode;
           last=newnode;           
       }
   }
   void dequeue()
   {
       if(front==NULL)
       {
           cout<<"No elements in Queue";
       }
       else
       {
           front=front->next;
       }
   }

   void showfront()
   {
       if(front!=NULL)
       cout<<front->data;
       else
       cout<<"Queue is Empty";
   }
   void display()
   {
       struct node *temp;
       temp=front;
       while(temp!=last)
       {
       cout<<temp->data<<" ";
       temp=temp->next;
       }

   } 
   
   int main()
  {
	int val,ch;
	while(ch!=5)
	{
		cout<<"\nEnter Your choice:\n1.Enqueue\n2.Dequeue\n3.Front Element\n4.Display\n5.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"Enter the Value to Push:";
					cin>>val;
					enqueue(val);
					break;
			case 2: dequeue();
					break;
			case 3: showfront();
					break;
			case 4: display();
					break;
			case 5: break;
			default: cout<<"Enter a Valid input!!!";
				
					}
	}
  }