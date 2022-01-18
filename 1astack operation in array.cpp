#include <iostream>
using namespace std;
int stack[100],n=100,top=-1;

void push(int value){
    if(top>=n-1){
        cout<<"stack overflow";
    }
    else{
        top++;
        stack[top]=value;
    }
}

void pop(){
    if(top<=-1)
    {
		cout<<"stack underflow";
    }
    else{
        cout<<"the popped element is"<<stack[top]<<endl;
        top--;
    }
}

void display(){
    if(top>=0){
        cout<<"stack elements are";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" "<<endl;
        }
    }
    else{
        cout<<"stack empty";
    }
}

int main(){
    int ch,val;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit"<<endl;

    do{
        cout<<"enter choice";
        cin>>ch;
        switch(ch){
        case 1:{
        cout<<"enter element to be pushed";
        cin>>val;
        push(val);
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
            break;
        }
        default:{
            cout<<"invalid choice";
            break;
        }
        }
    }while(ch!=4);
    return 0;
}
