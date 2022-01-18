#include <iostream>
using namespace std;

struct node{
     int data;
     struct node *next;
     };

struct node *top=NULL;
void push(int val){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode ->data=val;
    newnode->next=top;
    top=newnode;
}

void pop(){
    if(top==NULL){
    cout<<"stack underflow"<<endl;

    }
    else{
    cout<<"the popped element is"<<top->data<<endl;
    top=top->next;
    }
}

void display(){
    struct node *ptr;
    if(top==NULL)
    {
        cout<<"stack is empty";
    }
    else{
    ptr=top;
    cout<<"stack elements are:";
    while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
    }
    }
]
cout<<endl;
}

int main(){
    int ch;
    int val;
    cout<<"1)push in stack"<<endl;
    cout<<"2)pop from stack"<<endl;
    cout<<"3)display stack"<<endl;
    cout<<"4)exit"<<endl;
    do{
    cout<<"enter the choice"<<endl;
    cin>>ch;

    switch(ch)
    {

        case 1:{
        cout<<"enter the value to be pushed"<<endl;
        cin>>val;
        push(val);
        break;
        }

        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {

            cout<<"exit"<<endl;
            break;
        }
        default:{
            cout<<"invalid choice "<<endl;

        }
    }



    }
while(ch!=4)
return 0;
}
