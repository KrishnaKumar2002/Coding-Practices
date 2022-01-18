#include <iostream>
using namespace std;
/*
struct node{
int data;
struct node *next;
}

struct queue{
struct node *front;
struct node *rear;
}*/
int top=-1;
int stk[max];
#define max 200;
void push(char);
char pop();

void push(char c)
{

    if (top<=max-1){
        top+=1;
        stk[top]=c;
        }

    else if(top==max-1){
        cout<<"stack overflow";
    }
}

char pop()
{
    if(top==-1){
    cout<<"stack underflow";

    }
    else{
    return exp[top--];
    }

}
void main(){
    int flag=1;
    char exp[max];
    cout<<"enter the expression";
    gets(exp);

    for(int i=0;i<max;i++){
        if(exp[i]=='(' ||exp[i]=='[' ||exp[i]=='{')
           {

               push(exp[i]);
           }

        if (exp[i]==')' || exp[i]==']'||exp[i]=='}')
        {
            if (top==-1)
            {
                flag=0;
            }
        }
        else{
        temp=pop();
        if(exp[i]==')'&& (temp=='{'||temp=='[')){
        flag=0;
        }
        if(exp[i]==']'&&(temp=='{'  ||temp=='(')){
        flag=0;
        }
        if(exp[i]=='}&& (temp=='('||temp=='[')){
        flag=0;
        }

        }
    if(top>=0)
    {

        flag=0;
    }
    if(flag==1)
    cout<<"valid expression";
    else{
    cout<<"invalid expression";
    }
        }
