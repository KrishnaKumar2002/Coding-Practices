#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}

struct node *create(struct node *start){

    struct node *new_node, *ptr;
    int num;
    cout<<"enter -1 to end";
    cout<<"enter the data";
    cin>>num;
    while(num!=-1)
    {

        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=num;
        if(start==NULL)
        {
            start=new_node;
        }

        else{
            ptr=start;
            while(ptr->next!=start)
                ptr->next=ptr;
            ptr->next=new_node;
            new_node->next=start;
        }
        cout<<"enter the data";
        cin>>num;
    }
    return start;
}

struct node *display(struct node *start)
{

    struct node *ptr;
    ptr=start;
    while(ptr->next!=start)
    {

        cout<<ptr->data;
        ptr=ptr->next;

    }
    cout<<ptr->data;
    return start;
}

int main()
{

    int option;
    clrscr();
    do{
        cout<<"\n\n Main Menu";
        cout<<"1. Create a list";
        cout<<"2. Display the list";
        cout<<"3. exit";
        cin>>option;
        switch(option)
        {

            case 1:
            start=create(start);
            cout<<"circular linkedlist created";l
            break;

            case 2:
            start=display(start);
            break;
        }
    }while(option!=3);
    getch();
    return 0;


}
