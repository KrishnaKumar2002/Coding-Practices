#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* tail=NULL;
struct node* newnode=NULL;

//tail=malloc(sizeof(struct node));

void insertathead(int value){
    newnode=(struct node*) malloc(sizeof(struct node));
    head=(struct node*) malloc(sizeof(struct node));
    tail=(struct node*) malloc(sizeof(struct node));

    //tail=malloc(sizeof(struct node));

    if(head==NULL){
        head->data=value;
        head->next=head;
        tail=head;
    }
    else{
        newnode->data=value;
        newnode->next=head;
        tail->next=newnode;
        head=newnode;
    }
}

void insertattail(int value){
    struct node* temp;
    /*head=(struct node*) malloc(sizeof(struct node));
    temp=(struct node*) malloc(sizeof(struct node));
*/
    if(head==NULL){
        temp->data=value;
        temp->next=NULL;
        temp->next=temp;
        head=temp;
        tail=temp;
    }
    else{
        temp->data=value;
        temp->next=head;
        tail->next=temp;
        tail=temp;
    }
}

void deleteathead(){
    tail->next=head->next;
    free(head);
    head=tail->next;
}

/*void deletion(pos){
    int n=1;
    temp=head;
    while((temp->next!=NULL)&&(n!=pos)){
        temp=temp->next;
    }
    else{

    }
}*/

void display(){
    if(head==NULL){
        cout<<"no elements";
    }
    else{
        struct node* temp;
        temp=(struct node*) malloc(sizeof(struct node));

        temp=head;
        if(head->next==head){
            cout<<head->data;
        }
        else{
        while(temp->next!=head){
            cout<<temp->data;
            temp=temp->next;
        }
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

    //deleteathead();

    //deletion();

    display();
    return 0;
}
