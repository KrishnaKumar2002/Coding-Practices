#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int val,pos,i,cnt=0,serc=0,val2,con;
struct node
{
int data;
struct node *next;
}*head,*newn,*tem,*las,*temp;
void out()
{
 printf("\n\t\t---------DISPLAYING LIST---------\n");
 temp=head;
 if(temp==NULL)
 printf("\nList EMPTY");
 else
 {
 printf("\nThe list is:: ");
 while(temp!=NULL)
 {
 printf(" %d ",temp->data);
 temp=temp->next;
 }
 }
}
void create()
{
 int n=0;
 printf("\nEnter the no. of initial nodes: ");
 scanf("%d",&n);
 head=(struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 printf("Unable to allocate memory!!!");
 else
 {
 printf("\nEnter the value of node 1:: ");
 scanf("%d",&val);
 head->data=val;
 head->next=NULL;
 temp=head;
 for(i=2;i<=n;i++)
 {
 newn=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the value of node %d:: ",i);
 scanf("%d",&val);
 newn->data=val;
 newn->next=NULL;
 temp->next=newn;
 temp=temp->next;
 }
 out(head);
 }
}
void ins_start()
{
 printf("\n\t\t++++++++++++INSERTION++++++++++++\n");
 newn=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the value:");
 scanf("%d",&val);
 newn->data=val;
 newn->next=head;
 head=newn;
 out();
}
void ins_part()
{
 printf("\n\t\t++++++++++++INSERTION++++++++++++\n");
 printf("Enter the position:");
 scanf("%d",&pos);
 if(pos==1)
 ins_start();
 else
 {
 newn=(struct node*)malloc(sizeof(struct node));
 con=0;las=head;
 while(las!=NULL)
 {
 ++con; las=las->next;
 }
 if(con==1&&pos==1)
 ins_start();
 else if(con==2&&pos==2)
 { printf ("%d",con);
 printf("Enter the value:");
 scanf("%d",&val);
 newn->data=val;
 newn->next=head->next;
 head->next=newn;
 }
 else if(head==NULL)
 {
 printf("Enter the value:");
 scanf("%d",&val);
 newn->next=NULL;
 newn->data=val;
 head=newn;
 }
 else
 {
 temp=head;
 for(i=2;i<pos;i++)
 {
 temp=temp->next;
 if(temp==NULL)
 break;
 }
 if(temp!=NULL&&pos>0)
 {
 printf("Enter the value:");
 scanf("%d",&val);
 newn->next=temp->next;
 newn->data=val;
 temp->next=newn;
 }
 else
 printf("\nUnable to insert data");
 }
 out();
 }
}
void ins_end()
{
 printf("\n\t\t++++++++++++INSERTION++++++++++++\n");
 newn=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the value:");
 scanf("%d",&val);
 newn->data=val;
 newn->next=NULL;
 las=head;
 if(head==NULL)
 {
 head=newn;
 newn->next=NULL;
 }
 else
 {
 while(las->next!=NULL)
 las=las->next;
 las->next=newn;
 las=newn;
 }
 out();
}
void del_start()
{
 printf("\n\t\t------------DELETION------------\n");
 if(head==NULL)
 printf("List EMPTY");
 else
 {
 if(head->next==NULL)
 head=NULL;
 else
 {
 temp=head;
 head=head->next;
 free(temp);
 }
 }
out();
}
void del_end()
{
 printf("\n\t\t-------------DELETION-------------\n");
 struct node *sln;
 if(head==NULL)
 printf("\nList EMPTY");
 else
 {
 if(head->next==NULL)
 head=NULL;
 else
 {
 temp=head;
 while(temp->next!=NULL)
 {
 sln=temp;
 temp=temp->next;
 }
 }
 }
 sln->next =NULL;
 free(temp);
 out();
}
void del_part()
{
 printf("\n\t\t-------------DELETION-------------\n");
 printf("\nEnter the position:");
 scanf("%d",&pos);
 if(head==NULL)
 printf("List EMPTY");
 else if(pos==1)
 del_start();
 else
 {
 temp=head; //temp=to be deleted
 //tem=prev. one of temp
 for(i=1 ;i<pos;i++)
 {
 tem=temp;
 temp=tem->next;
 if(temp==NULL)
 break;
 }
 if(temp!=NULL)
 {
 tem->next=temp->next;
 temp->next=NULL;
 free(temp);
 out();
 }
 }
}
void ser()
{
 printf("\n\t\t---------SEARCH---------\n");
 printf("\nENter the data to be searched:: ");
 scanf("%d",&val2);cnt=0;serc=0;
 temp =head;
 while(temp!=NULL)
 {
 cnt++;
 if(temp->data==val2)
 {
 serc=1; 
 break;
 }
 else
 serc=0;
 temp=temp->next;
 }
 if(serc==1)
 printf("\nNo. %d found at position : %d",val2,cnt);
 else
 printf("\n No. %d not found.",val2);
}
void count()
{
 printf("\n\t\t/\/\/\/\/\/\COUNT/\/\/\/\/\/\\n");
 if(head!=NULL)
 {
 cnt=0;
 temp=head;
 while(temp!=NULL)
 {
 cnt++;
 temp=temp->next;
 }
 }
 printf("The total no. of nodes:: %d.",cnt);
}
void main()
{
 int ch=0,num=0,c=1,num2;
 head=NULL;
 las=NULL;
 clrscr();
 printf("\n\t\t\t∆∆∆∆∆∆∆∆∆∆∆∆∆∆∆__SINGLY LINKED
LIST__∆∆∆∆∆∆∆∆∆∆∆∆∆∆∆∆");
 create();
 while(c==1)
 {
 printf("\n\n\nMENU CARD [chose
one]\n\n1.INSERTION\n2.DELETION\n3.SEARCH\n4.COUNT\n5.DISPLAY
LIST\n\tEnter your choice:: ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("\nInsert @\n1.Beginning\n2.Any specific\n3.At the end\n\tEnter your
choice:: ");
 scanf("%d",&num);
 switch(num)
 {
 case 1: ins_start();break;
 case 2:ins_part();break;
 case 3: ins_end();break;
 default : printf("\n\t WRONG CHOICE (^!!^)");
 }break;
 case 2: printf("\nDELETE @at\n1.Beginning\n2.Any specific\n3.At the
end\n\t\tEnter your choice:: ");
 scanf("%d",&num2);
 switch(num2)
 {
 case 1: del_start();break;
 case 2: del_part();break;
 case 3: del_end();break;
 default : printf("\n\t WRONG CHOICE (^!!^)");
 }break;
 case 3: printf("\nSEARCH");
 ser();
 break;
 case 4: count();break;
 case 5: out();break;
 default : printf("\n\t WRONG CHOICE (^!!^)");
 }
printf("\n \nDo you want to edit the LIST \n[1] for Yes \n[0] for No\n Choice:: ");
scanf("%d",&c);printf("\n\n");
for(int j=0;j<35;j++)
printf("**");
 }
getch();
}