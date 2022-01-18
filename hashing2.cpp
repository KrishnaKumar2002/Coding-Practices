#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Insert(int a[10])
{
    int key,h1,h2;
    int i=0;
    cout<<"Enter the key to be inserted:";
    cin>>key;
    h1=key%10;
    h2=3+key%5'
    /*
    while(a[h1+i*h2]!=0&&a[h1+i*h2]!=-1&&i<10)
    {
        i++;
    }
    if(i!=10)
    a[h1+i*h2]=key;
    else
        cout<<"no space"<<endl;
    */
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
    int h1=key%10;
    int h2=3+key%5;
    while(a[h1+i*h2]!=0&&i<10)
    {
        if(a[h1+i*h2]==key)
        {
            cout<<"Element found at "<<h1+i*h2;
            break;
        }

        else
            i++;
    }
}

void Delete(int a[10])
{
    int key,i=0;
    cout<<"Enter the key to be deleted:";
    cin>>key;
    int h1=key%10;
    int h2=3+key%5;
    while(a[h1+i*h2]!=0&&i<10)
    {
        if(a[h1+i*h2]==key)
        {
            a[h1+i*h2]=-1;
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
