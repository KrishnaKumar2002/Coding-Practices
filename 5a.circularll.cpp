#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
//tail=malloc(sizeof(struct node));
void insertathead(int value){
    struct node* newnode=NULL;
    //newnode=malloc(sizeof(struct node));
    if(head==NULL){
        head=(struct node*)malloc(sizeof(struct node));
        head->data=value;
        head->next=head;
        tail=head;
    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=head;
        tail->next=newnode;
        tail=newnode;
    }
}
void insertattail(int value){
    struct node* temp;
    if(tail==NULL){
        tail=(struct node*)malloc(sizeof(struct node));
        head=tail;
        tail->data=value;
        tail->next=head;
        }
    else{
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=value;
        temp->next=head;
        tail->next=temp;
        tail=temp;
    }
}
void display(){
    if(head==NULL){
        cout<<"no elements";
    }
    else{
        struct node* temp;
        temp=head;
        if(head->next==head){
            cout<<head->data;
        }
        else{
        while(temp->next!=head){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<temp->data;
        }
    }
}
int main(){
    insertathead(1);
    insertathead(2);
    insertathead(3);
    insertathead(4);
    insertattail(5);
    insertattail(6);
    insertattail(7);
    insertattail(8);
    display();
    /*insertattail(1);
    insertattail(2);
    insertattail(3);
    insertattail(4);
    display();
    insertattail(5);
    display();
    deletion(1);
    display();*/
    return 0;
}
