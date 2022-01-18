#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode;
struct node* root;


struct node* create(){
    //struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    cout<<"enter the data(-1 for no data_)";
    cin>>x;
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    cout<<"enter left child of x";
    newnode->left=create();
    cout<<"enter right child of x";
    newnode->right=create();
    return newnode;
};

void preorder(struct node*temp){
    temp=(struct node*)malloc(sizeof(struct node));
    temp=root;
    if(temp==-1){
        return;
    }
    cout<<temp->data;
    preorder(temp->left);
    preorder(temp->right);
}

int main(){
    //struct node* root;
    root=(struct node*)malloc(sizeof(struct node));
    root=create();
    preorder(root);
    return 0;
}
