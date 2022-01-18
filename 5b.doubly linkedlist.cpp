#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;
struct node* newnode=NULL;


void push(int value){
    newnode=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL){

    /*newnode->next=NULL;
    newnode->prev=NULL;*/
    newnode->data=value;
    head=newnode;
    }
    else{
    newnode->next=head;
    newnode->prev=NULL;
    newnode->data=value;
    head->prev=newnode;
    head=newnode;
    }
}

void printlist(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    //head=(struct node*)malloc(sizeof(struct node));

    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
    }
}

int main(){
    push(7);
    push(1);
    push(4);
    //insertbefore(head->next,8);
    cout<<"DLL is";
    printlist();
    getchar();
    return 0;
}
