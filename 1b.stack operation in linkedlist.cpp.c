#include<stdio.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;

void insert(int value){
    struct node* temp=NULL;
    temp=struct node* malloc(sizeof(struct node));

    if(temp==NULL){
        cout<<"stack underflow";
    }
    else{
        temp->data=value;
        temp->next=top;
        top=temp;
    }
}

void pop(){
    if(top==NULL){
        cout<<"stack underflow";
    }
    else{
    cout<<"popped data is"<<top->data;
    top=top->next;
    }
}

void display(){
 if(top==NULL){
    cout<<"empty stack";
 }
 else{
    while(top->next!=NULL){
        cout<<"stack elements are"<<endl;
        cout<<top->data;
    }
 }
}

int main(){
    int ch,val;
    cout<<"1.push";
    cout<<"2.pop";
    cout<<"3.display";
    cout<<"4.exit";

    do{
        cout<<"enter choice";
        cin>>ch;
        switch(ch){
        case 1:{
        cout<<"enter element to be pushed";
        cin>>val;
        insert(val);
        break;}
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
        case 4:{
            cout<<"exit"<<endl;
        }
        default:{
            cout<<"invalid choice";
        }
        }
    }while(ch!=4);
    return 0;
}
