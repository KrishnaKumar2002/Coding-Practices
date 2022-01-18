#include<stdio.h>
#include<conio.h>
using namespace std;

int queue[100],n=100,front=-1,rear=-1;

void enqueue(int value){
    if(rear==n-1){
        cout<<"queue overflow";
    }
    else{
        if(front==-1){
            front++;
        }
        rear++;
        queue[rear]=value;
    }
}

void dequeue(){
    if(front==-1){
        cout<<"queue underflow";
    }
    else{
        cout<<"popped element is"<<queue[front]<<endl;
        front++;
    }
    }

void display(){
    if(front==-1){
        cout<<"queue underflow";
    }
    else{
        cout<<"queue elements are";
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i];
            cout<<endl;
        }
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
