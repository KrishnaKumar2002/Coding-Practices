#include<iostream>
using namespace std;
#define N 10
int queue[N];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peak(void);
void display(void);
int main()
{

    int option,val;
    do{
        cout<<"\n\n***MAIN MENU***";
        cout<<"1. insert \n 2. delete \n 3. peek \n 4. display \n 5. exit";
        cout<<"enter your choice:";
        cin>>option;

        switch(option)
        {

        case 1:
            insert();
            break;
        }
        case 2:
        {
            val=delete_element();
            if(val !=-1)
            cout<<"the number deleted is"<<val;
            break;        }

    case 3:
    {

        val=peek();
        if(val!=-1){
        cout<<"the first value is"<<val;
        }
    }
    case 4:
    {

        display();
        break;
    }
}
while(option!=5);
getch();
return0;
}

void insert(){
    int num;
    cout<<"enter the number";
    cin>>num;
    if(rear==N-1){
    cout<<"queue overflow";
    }

    else if(front==-1 && rear==-1)
    {

        front=rear=0;

    }
    else{
    rear++;
    queue[rear]=num;
    }
}

int delete_element(){
    int val;
    if(rear==-1 && front==-1)
    {

        cout<<"stack underflow";
    }
    else{
        val=queue[front];
        front++;
        if (front>rear)
        front=rear=-1;
        return val;
    }
}

int peek(){
    if(front==-1 && rear==-1)
{
cout<<"queue underflow";

}
else{
return queue[front];

}

void display(){

    int i;
    count<<endl;
    if(front==-1 && rear==-1)
    cout<<"queue underflow";

    else{
        for(i=front;i<rear+1;i++)
        cout<<queue[i]
    }
}
