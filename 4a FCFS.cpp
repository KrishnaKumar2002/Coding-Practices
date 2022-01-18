#include<iostream>
#include<queue>
#include<iomanip>
using namespace std;
queue <struct process> q;
int timeline=0,avgWt=0,avgTAT=0;
struct process
{
    int id;
    int at;
    int bt;
    int st;
    int ct;
    int tat;
    int wt;

}p[100];

void sort(struct process s[100],int n)

{
    struct process temp;

for(int i=0;i<n;i++) {
   for(int j=i+1;j<n;j++)
   {
      if(s[j].at < s[i].at) {
         temp = s[i];
         s[i] = s[j];
         s[j] = temp;
      }
   }
}
}


void calculate()
{
    struct process w;
    while(!q.empty())
    {
        w=q.front();
        q.pop();
        if(timeline<w.at)
            timeline=w.at;
        w.st=timeline;
        timeline+=w.bt;
        w.ct=timeline;
        w.wt=w.st-w.at;
        w.tat=w.ct-w.at;
        int i=w.id;
        p[i]=w;
    }   


}

void average(int n)
{
    for(int i=0;i<n;i++)
    {
        avgTAT+=p[i].tat;
        avgWt+=p[i].wt;
    }
    avgWt/=n;
    avgTAT/=n;
}

void print(int n)
{
    cout<<setprecision(2)<<fixed;
    cout<<"#P\t"<<"AT\t"<<"BT\t"<<"ST\t"<<"CT\t"<<"TAT\t"<<"WT\t"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<p[i].id<<"\t"<<p[i].at<<"\t"<<p[i].bt<<"\t"<<p[i].st<<"\t"<<p[i].ct<<"\t"<<p[i].tat<<"\t"<<p[i].wt<<endl;
    }
    cout<<"Average Waiting Time:"<<avgWt<<endl;
    cout<<"Average Turn-Around Time:"<<avgTAT<<endl;


}
int main()
{
    int n;
    cout<<"Enter the Number of Process[<100]:";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        p[i].id=i;
        cout<<"Enter Arrival Time of #P"<<i<<" :";
        cin>>p[i].at;
        cout<<"Enter Burst Time of #P"<<i<<" :";
        cin>>p[i].bt;   
    }
    sort(p,n);
    for(int i=0;i<n;i++)
        q.push(p[i]);
    calculate();
    average(n);
    print(n);
         
}
