#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Insert(int a[10])
{
    int key,h;
    int i=0;
    cout<<"Enter the key to be inserted:";
    cin>>key;
    h=key%10;
    /*while(a[h+i]!=0&&a[h+i]!=-1&&i<10)
    {
        i++;
    }
    if(i!=10)*/
    a[h+i]=key;
    else
        cout<<"no space"<<endl;
}

void display(int a[10])
{
    for(int i=0;i<10;i++)
        cout<<a[i]<<" "<<endl;
}

void Find(int a[10])
{
    int i=0,key;
    cout<<"Enter the key to be found:";
    cin>>key;
    int h=key%10;
    for(i=0;i<10;i++){
        if(a[h+i]==h)
            return h+i;
    }
    /*
    while(a[h+i]!=0&&i<10)
    {
        if(a[h+i]==key)
        {
            cout<<"Element found at "<<h+i;
            break;
        }

        else
            i++;
    }
    */
}
void Delete(int a[10])
{
    int key,i=0;
    cout<<"Enter the key to be deleted:";
    cin>>key;
    int h=key%10;
    while(a[h+i]!=0&&i<10)
    {
        if(a[h+i]==key)
        {
            a[h+i]=-1;
            break;
        }
        else
            i++;
    }
}
int main()
{
    int  a[10]={0,0,0,0,0,0,0,0,0,0};
    int choice;
    cout<<"1.insertion"<<endl;
    cout<<"2.find"<<endl;
    cout<<"3.deletion"<<endl;
    cout<<"4.display"<<endl;
    cout<<"5.Exit"<<endl;

    do{
            cout<<"enter the choice:";
            cin>>choice;

            switch(choice)
            {
            case 1:
                Insert(a);
                break;

            case 3:
                Delete(a);
                break;

            case 4:
                display(a);
                break;

            case 2:
                Find(a);
                break;
            case 5:
                 break;
            }
    }while(choice!=5);
}
