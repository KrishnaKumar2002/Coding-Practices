#include <stdio.h>
#include <stdlib.h>
# define N 5

/* Structure for queue with array size and pointers */
struct queue
{
int s[N];
int front,rear;
}st;

/* Function to check if the queue is full */
int full()
{
if( ((st.front == 0) && (st.rear == N - 1)) || (st.rear == st.front -1))
return 1;
else return 0;
}

/* Function to check if the queue is empty */
int empty()
{
if(st.front == -1)
return 1;
else return 0;
}

/* Function to insert elements in a queue */
void enqueue(int num)
{
if(full())
{
printf("\nQUEUE IS FULL\n");
}
else
{
if(st.front == -1)
{
st.front = 0;
}
st.rear = ((st.rear + 1) % N);
st.s[st.rear]=num;
}}

/* Function to delete elements in a queue */
int dequeue()
{
int x;
if(empty())
{
printf("\nQUEUE IS EMPTY\n");
}
else
{
x = st.s[st.front];
if(st.front==st.rear)
st.front=st.rear=-1;
else
st.front = ((st.front + 1) % N);
}
printf("\nDequeued Element : %d",x);
}

/* Function to display the elements in the queue */
void display()
{
int i;
if(empty())
printf("\nEMPTY QUEUE\n");
else
{
printf("\nFRONT INDEX : %d ",st.front);
printf("\nQUEUE ELEMENTS : ");
for(i=st.front;i!=st.rear;i = ((i+1)%N))
printf("%d ",st.s[i]);
printf("%d ",st.s[i]);
printf("\nREAR INDEX : %d \n",st.rear);
}}

/* Main function */
int main()
{
int num,choice;
st.front = st.rear = -1;
while(1)
{
printf("\n\nSelect The Operation you need to perform\n\n Enter Number to proceed\n\n 1.Enqueue\n2.DEequeue\n3.Display\n\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
if(full())
{
printf("\nQUEUE IS FULL\n");
}
else
{
printf("\nEnter item : ");
scanf("%d",&num);
enqueue(num);
}
break;
case 2:
if (empty())
{
printf("\nEMPTY QUEUE\n");
}
else
{
dequeue();
}
break;
case 3:
display();
break;
default: exit(0);
}}
return 0;
}
