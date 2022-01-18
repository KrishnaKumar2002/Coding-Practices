#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct node
{
    float coeff;
    int expo;
    node *next;
};

node *poly1head;
node *poly2head;
node *poly3head;

int main()
{
    int deg;
    cout<<"\nEnter the degree of the equation to be added:";
    cin >>deg;
    cout<<"\nEnter the first equation!";
    int data;
    for(int i=0;i<deg;i++)
    {
        cout<<"\nEnter the coefficient of term X^"<<i<<" :";
        cin>>data;
        node *newnode=new node;
        newnode->coeff=data;
        newnode->expo=i;
        newnode->next=NULL;
        if(poly1head==NULL)
        {
            poly1head=newnode;
        }
        else
        {
            newnode->next=poly1head;
            poly1head=newnode;
        }
    }
    cout<<"\nEnter the second equation!";

    for(int i=0;i<deg;i++)
    {
        cout<<"\nEnter the coefficient of term X^"<<i<<" :";
        cin>>data;
        node *newnode=new node;
        newnode->coeff=data;
        newnode->expo=i;
        newnode->next=NULL;
        if(poly2head==NULL)
        {
            poly2head=newnode;

        }
        else
        {
            newnode->next=poly2head;
            poly2head=newnode;
        }
    }

    node *poly1temp=poly1head,*poly2temp=poly2head;

    while(poly1temp!=NULL)
    {
        node *newnode=new node;
        newnode->coeff=poly1temp->coeff+poly2temp->coeff;
        newnode->expo=poly1temp->expo;
        newnode->next=NULL;
        if(poly3head==NULL)
        {
            poly3head=newnode;
        }
        else
        {
            newnode->next=poly3head;
            poly3head=newnode;
        }
        poly1temp=poly1temp->next;
        poly2temp=poly2temp->next;
    }

    node* temp=poly3head;

    while(temp->next!=NULL)
    {
        cout<<temp->coeff<<"X^"<<temp->expo<<" + ";
        temp=temp->next;
    }
    cout<<temp->coeff<<"X^"<<temp->expo;
    return 0;
}
