//#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iostream,h>
using namespace std;
struct node{
int coeff;
int power;
node*next;
};

node*poly1,*poly2;
node*temp1,*temp2,*temp3,*poly3;

int main(){
    int deg1,deg2,i;
    cout<<"Enter the degree of poly1:";
    cin>>deg1;
    for(i=0;i<=deg1;i++)
    {
        node* temp1=new node;
        cout<<"Enter the coeffecient of power "<<i<<":";
        cin>>temp1->coeff;
        temp1->power=i;
        temp1->next=NULL;
        temp1->next=poly1;
        poly1=temp1;
    }
    cout<<"Enter the degree of 2nd polynomial:";
    cin>>deg2;
    for(i=0;i<=deg2;i++)
    {
        node*temp2=new node;
        cout<<"Enter the coeffecient of power "<<i<<":";
        cin>>temp2->coeff;
        temp2->power=i;
        temp2->next=poly2;
        poly2=temp2;
    }


    for(node*temp1=poly1;temp1!=NULL;temp1=temp1->next)
    {
        for(node*temp2=poly2;temp2!=NULL;temp2=temp2->next)
        {

            node*temp3=new node;

            temp3->coeff=temp1->coeff*temp2->coeff;
            temp3->power=temp1->power+temp2->power;

            temp3->next=poly3;
            poly3=temp3;
        }
    }
    /*
    node*prev=poly3;
    for(temp1=poly3;temp1!=NULL;temp1=temp1->next)
    {
        for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->power==temp2->power)
            {
                temp2->coeff=temp1->coeff+temp2->coeff;
                prev->next=temp1->next;
                delete(temp1);
            }

        }
    }

*/
    node*temp=poly3;
    while(temp!=NULL)
    {
        cout<<temp->coeff<<"X^"<<temp->power<<"+";
        temp=temp->next;
    }

return 0;
}
