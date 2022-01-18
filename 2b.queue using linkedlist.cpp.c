#include <iostream.h>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void enqueue(int value){
    if(rear==NULL){
        rear=(struct node*) malloc(sizeof(struct node));
        rear->data=value;
        rear->next=NULL;
        front=rear;
    }
    else{
        temp=struct node* malloc(sizeof(struct node));
        temp->data=value;
        temp->next=NULL;
        rear->next=temp;
        rear=temp;
    }
}

void dequeue(){
    temp=front;
    if(front==NULL){
        cout<<"underflow";
    }
    else if(front->next!=NULL){
        cout<<"dequeued element is"<<front->data;
        temp=temp->next;
        free(front);
        front=temp;
    }
    else{
        cout<<"dequeued element is"<<front->data;
        free(front);
        front=NULL;
        rear=NULL;
    }
}

void display(){
    temp=front;
    while(temp->next!=NULL){
            cout<<temp->data<<\t;
            temp=temp->next;
    }
}

int main(){
    int ch,val;
    cout<<"1.enqueue"<<endl<<"2.dequeue"<<endl<<"3.display"<<endl<<"4.exit"<<endl;
    do{
        cout<<"enter your choice";
        cin>>ch;
        switch(ch){
        case 1:
            {
                cout<<"enter element to be added";
                cin>>val;
                enqueue(val);
                break;
            }
        case 2:
            {
                dequeue();
                break;
            }
        case 3:
            {
                display();
                break;

            }
        case 4:{
            cout<<"exit";
        }
        default:{
            cout<<"invalid choice";
        }
        }
    }while(ch!=4);
    return 0;
}

